#include<bits/stdc++.h>

using namespace std;

// Function to generate a random number between min and max
double getRandomNumber(double min, double max)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(min, max);
    return dis(gen);
}

// Structure to represent a task
struct Task
{
    int taskId;
    double length;
};
bool operator<(Task a, Task b)
{
    return a.taskId<b.taskId;
}

// Structure to represent a VM
struct VM
{
    int vmId;
    double processingCapacity;
};

// Function to initialize the particles and their mappings
map<int, map<Task, VM> > initializeParticles(int taskCount, int vmCount,int noParticles, map<int, double>& pbMap, map<int, map<Task, VM>>& pMap, map<int, map<Task, VM>>& gbFMap)
{
    map<int, map<Task, VM>> particles;

    for (int p = 0; p < noParticles; ++p)
    {
        map<Task, VM> particle;
        for (int c = 0; c < taskCount; ++c)
        {
            int pos = getRandomNumber(0, vmCount - 1);
            Task task;
            task.taskId = c;
            particle[task] = VM{pos, 0.0};
        }
        particles[p] = particle;

        pbMap[p] = 0.0;
        pMap[p] = particle;
        gbFMap[0] = particle;
    }
    return particles;
}

// Function to calculate the execution time of a task on a VM
double getExecutionTime(const Task& task, const VM& vm)
{
    return task.length / vm.processingCapacity;
}

// Function to update the readiness time of a VM after scheduling a task
void updateVmReadinessTime(map<int, double>& vRTMap, const VM& vm, const Task& task, double execTime)
{
    vRTMap[vm.vmId] += execTime;
}

// Function to update the task-to-VM mapping after scheduling a task
void updateTaskVmMapping(map<int, map<Task, VM>>& pMap, int particleId, int position, const Task& task, const VM& vm)
{
    pMap[particleId][task] = vm;
}

// Function to evaluate the fitness of a particle's mapping.Fitness value is maximum Ready time.
double evaluateFitness(const map<int, double>& vRTMap)
{
    double fitness = 0.0;
    for (const auto& entry : vRTMap)
    {
        fitness = max(fitness, entry.second);
    }
    return fitness;
}

int main()
{
    // Example task and VM input data
    /*
    vector<Task> taskList = {{1, 10.0}, {2, 8.0}, {3, 12.0}};
    vector<VM> vmList = {{1, 5.0}, {2, 10.0}, {3, 8.0}};
    */
    vector<Task> taskList = {{0, 50.0}, {1, 100.0}, {2, 150.0},{3, 200.0}, {4, 300.0}, {5, 450.0},{6, 500.0}, {7, 600.0}, {8, 700.0},{9, 900.0}, {10, 1200.0}, {11, 1500.0},{12, 2000.0}, {13, 3000.0}, {14, 4000.0}};
    vector<VM> vmList = {{0, 50.0}, {1, 100.0}, {2, 200.0}, {3, 350.0}, {4, 500.0}};

    int taskCount = taskList.size();
    int vmCount = vmList.size();

    map<int, double> pbMap;   //personal best value for particle. initially 0.
    map<int, double> vRTMap;      //virtual machine id ready time
    map<int, map<Task, VM>> pMap;    //protiti particle er jonne protiti task, machine map kora ace.
    map<int, map<Task, VM>> gbFMap;  //global best function map.
    int itr = 1;
    int maxItr = 200;
    int noParticles = 20;
    int ps = 1;

    map<int, map<Task, VM>> particles = initializeParticles(taskCount, vmCount, noParticles, pbMap, pMap, gbFMap);


    double w1 = 0.9;
    double w2 = 0.4;
    double c1 = 2.0;
    double c2 = 1.49455;

    while (itr <= maxItr)
    {
        double w = ((w1 - w2) / maxItr) + ((maxItr - itr) / maxItr) * (w1 - (w1 - w2)) / maxItr;
        int ss = 0;

        for (int p = 0; p < noParticles; ++p)
        {
            map<Task, VM>& particle = particles[p];
            for (int c = 0; c < taskCount; ++c)
            {
                double r1 = getRandomNumber(0, 1);
                double r2 = getRandomNumber(0, 1);
                Task task = taskList[c];
                double& v = particle[task].processingCapacity;
                int pos = particle[task].vmId;

                v = (w * v) + (c1 * r1 * (pbMap[p] - pos)) + (c2 * r2 * (gbFMap[0][task].processingCapacity - pos));

                pos = pos + (int)v;
                if (pos >= vmCount || pos < 0)
                {
                   pos = getRandomNumber(0, vmCount - 1);
                }

                VM vm = vmList[pos];
                double execTime = getExecutionTime(task, vm);
                updateVmReadinessTime(vRTMap, vm, task, execTime);
                updateTaskVmMapping(pMap, p, pos, task, vm);
            }

            double pBestValue = evaluateFitness(vRTMap);
            if (pBestValue > pbMap[p])
            {
                pbMap[p] = pBestValue;
                ss++;
                if (pBestValue > gbFMap[0].begin()->second.processingCapacity) {
                    gbFMap[0] = pMap[p];
                }
            }
        }

        ps = (ss > 0) ? ss / noParticles : 1;

        itr++;
    }

    // Print the global best task-to-VM mapping
    cout << "Global Best Mapping: " << endl;
    for (const auto& entry : gbFMap[0])
    {
        cout << "Task " << entry.first.taskId << " -> VM " << entry.second.vmId << endl;
    }

    return 0;
}
