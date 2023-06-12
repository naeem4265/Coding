#include <bits/stdc++.h>
using namespace std;

struct Task{
    int taskId;
    double length;
};
bool operator<(Task a, Task b)
{
    return a.taskId<b.taskId;
}

struct VM{
    int vmId;
    double processingCapacity;
};
bool operator<(VM a, VM b)
{
    return a.vmId<b.vmId;
}

double getExecutionTime(const Task& task, const VM& vm) {
    return task.length / vm.processingCapacity;
}

double evaluateFitness(const map<VM, double>& vRTMap) {
    double fitness = 0.0;
    for (const auto& entry : vRTMap) {
        fitness += entry.second;
    }
    return fitness;
}

void updateVmReadinessTime(map<VM, double>& vRTMap, const VM& vm, const Task& task, double execTime) {
    if (vRTMap.count(vm) == 0) {
        vRTMap[vm] = execTime;
    }
    else {
        vRTMap[vm] = max(vRTMap[vm], execTime);
    }
}

void updateTaskVmMapping(map<Task, VM>& pMap, int p, int pos, const Task& task, const VM& vm) {
    pMap[task] = vm;
}

int main()
{
    vector<Task> taskList = {{1, 50.0}, {2, 100.0}, {3, 150.0},{4, 200.0}, {5, 300.0}, {6, 450.0},{7, 500.0}, {8, 600.0}, {9, 700.0},{10, 900.0}, {11, 1200.0}, {12, 1500.0},{13, 2000.0}, {14, 3000.0}, {15, 4000.0}};
    vector<VM> vmList = {{1, 50.0}, {2, 100.0}, {3, 200.0}, {4, 350.0}, {5, 500.0}};
    // Input data
    map<Task, VM> particle;
    map<int, double> pbMap;
    map<int, map<Task, VM>> pMap;
    map<int, map<Task, VM>> gbFMap;
    map<VM, double> vRTMap;

    // Populate input data (vmList and taskList)...

    int taskCount = taskList.size();
    int vmCount = vmList.size();
    double w = 0.0;
    int ss = 0;
    int noParticles = 20;
    int itr = 1;
    int MaxItr = 200;
    double c1 = 2.0;
    double c2 = 1.49455;
    double w1 = 0.9;
    double w2 = 0.4;
    double ps = 0.0;

    // Initialize particles
    for (int p = 0; p < noParticles; ++p) {
        map<Task, VM> initialParticle;
        for (int c = 0; c < taskCount; ++c) {
            int pos = rand() % vmCount;
            Task task = taskList[c];
            VM vm = vmList[pos];
            initialParticle[task] = vm;
        }
        pMap[p] = initialParticle;
        double fitness = evaluateFitness(vRTMap);
        pbMap[p] = fitness;
        if (p == 0 || fitness > gbFMap[0].begin()->second.processingCapacity) {
            gbFMap[0] = pMap[p];
        }
    }

    while (itr <= MaxItr) {
        w = ((w1 - w2) / MaxItr) + ((MaxItr - itr) / MaxItr) * (w1 - (w1 - w2) / MaxItr);

        for (int p = 0; p < noParticles; ++p)
        {
            for (int c = 0; c < taskCount; ++c)
            {
                double r1 = static_cast<double>(rand()) / RAND_MAX;
                double r2 = static_cast<double>(rand()) / RAND_MAX;
                Task task = taskList[c];
                double& v = particle[task].processingCapacity;
                int pos = particle[task].vmId;

                v = (w * v) + (c1 * r1 * (pbMap[p] - pos)) + (c2 * r2 * (gbFMap[0][task].processingCapacity - pos));

                pos = static_cast<int>(pos + v);
                if (pos >= taskCount || pos < 0) {
                    pos = rand() % taskCount;
                }

                VM vm = vmList[pos];
                double execTime = getExecutionTime(task, vm);
                updateVmReadinessTime(vRTMap, vm, task, execTime);
                updateTaskVmMapping(pMap[p], p, pos, task, vm);
            }

            double pBestValue = evaluateFitness(vRTMap);
            if (pBestValue > pbMap[p]) {
                pbMap[p] = pBestValue;
                ss++;
                if (pBestValue > gbFMap[0].begin()->second.processingCapacity) {
                    gbFMap[0] = pMap[p];
                }
            }
        }

        ps = ss / noParticles;
        if (ps <= 0) {
            ps = 1;
        }
        ss = 0;
        itr++;
    }

    // Output the final task-to-VM mapping (gbFMap[0])
    cout << "Global Best Mapping: " << endl;
    for (const auto& entry : gbFMap[0]) {
        cout << "Task " << entry.first.taskId << " -> VM " << entry.second.vmId << endl;
    }

    return 0;
}
