Input:  taskList: List of tasks with their length in (MI)
        vmList:   List of virtual machine with their processing capacity(MIPS)
Output: gBestAssign: global best final assignment of tasks to virtual machine.

getExecutionTime()
    return Task.instruction/Vm.instruction
getVmReadyTime()
    return TotalInstruction in Vm/Vm.instruction
getpBestMap()
    return BestExecutionTime AND BestLoadBalance

TaskList = getTaskList(taskList)
VmList = getVmList(vmList)
NoTask = TaskList.size()
NoVm = VmList.size()
Initialization(pos, v, w, ss, c1, c2, w1, w2,Ps)
NoParticle = 50, it = 1, Mxit = 100
pBestMap<integer, pair<double, double> = NULL
VmReadyTime<Integer, Double> = NULL
ParticleMap<Task, Vm> = NULL
gBestMap<integer, pair<double, double> = NUOLL
pBestMap = initiazeParticles(NoTask, VmCount, pBestMap, ParticleMap, gBestMap, noParticles)
while(it <= Mxit)
    w = ((w1-w2)/Ps)+((Mxit-it)/Mxit)*(w1-(w1-w2)/Ps)
    for(prts = 1 to noParticles)
        for(tsk = 1 to NoTask)
            r1 = RandomNumber(0,1), r2 = RandomNumber(0,1)
            v = (w*v)+(c1*r1*(pBestMap.get(prts)-pos)) + (c2*r2*(gBestValue-pos))
            pos = pos + v
            if pos >= NoVm || pos < 0
                pos = RandomNumber(0, NoVm)
            VMachine = getVm(ParticleMap)
            executionTime = getExecutionTime(TaskList, tsk, VMachine)
            executionTime += getVmReadyTime(VmReadyTime, VMachine)
            updateVMReadyTimeMap(VmReadyTime, VMachine, tsk, executionTime)
            updateParticleMap(VmReadyTimeMap, ParticleMap, pos, tsk)
        End for
        pBestValue = getpBestMap(VmReadyTimeMap)
        if (pBestValue.executionTime < pBestMap.get(prts))
            pBestMap.prts = pBestValue.executionTime;
            ss++;
        end if
        if(pBestValue.executionTime > gBest.executionTime OR (pBestValue.executionTime=gBest.executionTime) AND pBestValue.lBest > gBest.lBest))
            gBestMap = ParticleMap.gets(prts);
            gBest = pBestValue;
        end if
    end for
    Ps = ss/noParticles
    if Ps < 0
        Ps = 1
    end if
    it++
end while








Here is the algorithm for the given logic:

1. Define the function getExecutionTime(), which calculates the execution time for a task on a virtual machine based on their instructions.
2. Define the function getVmReadyTime(), which calculates the ready time for a virtual machine based on its total instructions and processing capacity.
3. Define the function getpBestMap(), which returns the best execution time and load balance for a given assignment of tasks to virtual machines.
4. Initialize the taskList and vmList variables.
5. Get the number of tasks (NoTask) and virtual machines (NoVm) from the lists.
6. Initialize the parameters for the particle swarm optimization (PSO) algorithm: position (pos), velocity (v), weight (w), social coefficient (c1), cognitive coefficient (c2), weight factors (w1, w2), and the convergence rate (Ps).
7. Initialize the pBestMap, VmReadyTime, ParticleMap, and gBestMap variables.
8. Initialize the particles' positions, pBestMap, ParticleMap, and gBestMap using the initializeParticles() function.
9. Perform the PSO algorithm iterations until the maximum iteration count (Mxit) is reached.
10. Update the weight factor (w) based on the current iteration.
11. For each particle (prts) in the swarm:
    a. For each task (tsk) in the taskList:
        i. Generate random numbers (r1 and r2) between 0 and 1.
        ii. Update the velocity (v) based on the current velocity, cognitive and social terms, and the difference between the current position (pos) and the best position (pBestMap) and global best position (gBestMap).
        iii. Update the position (pos) by adding the velocity (v).
        iv. If the position (pos) is outside the valid range of virtual machines (NoVm), randomly assign a new position.
        v. Get the virtual machine (VMachine) for the current particle (ParticleMap).
        vi. Calculate the execution time for the current task (tsk) on the selected virtual machine (VMachine) using the getExecutionTime() function.
        vii. Calculate the virtual machine ready time for the selected virtual machine (VMachine) using the getVmReadyTime() function.
        viii. Update the VmReadyTime map with the new ready time for the VMachine.
        ix. Update the ParticleMap with the new assignment of the task (tsk) to the virtual machine (VMachine).
    b. Calculate the best execution time and load balance for the current ParticleMap (VmReadyTimeMap) using the getpBestMap() function.
    c. If the calculated pBestValue.executionTime is better than the current pBestMap value for the particle (prts), update the pBestMap and increment the success count (ss).
    d. If the calculated pBestValue.executionTime is better than the current gBest.executionTime or if it is equal to gBest.executionTime but has a better load balance (pBestValue.lBest > gBest.lBest), update the gBestMap and gBest variables.
12. Update the convergence rate (Ps) by dividing the success count (ss) by the number of particles (noParticles).
13. If the convergence rate (Ps) is negative, set it to 1.
14. Increment the iteration count (it).
15. Repeat from step 9 until the maximum iteration count (Mxit) is reached.





function getExecutionTime(Task, Vm):
    return Task.instruction / Vm.instruction

function getVmReadyTime(Vm):
    return Vm.totalInstruction / Vm.instruction

function getpBestMap():
    return BestExecutionTime AND BestLoadBalance

TaskList = getTaskList(taskList)
VmList = getVmList(vmList)
NoTask = TaskList.size()
NoVm = VmList.size()

Initialization(pos, v, w, ss, c1, c2, w1, w2, Ps):
    NoParticle = 50
    it = 1
    Mxit = 100
    pBestMap<integer, pair<double, double>> = NULL
    VmReadyTime<Integer, Double> = NULL
    ParticleMap<Task, Vm> = NULL
    gBestMap<integer, pair<double, double>> = NULL

    pBestMap = initializeParticles(NoTask, NoVm, pBestMap, ParticleMap, gBestMap, NoParticle)

    while (it <= Mxit):
        w = ((w1 - w2) / Ps) + ((Mxit - it) / Mxit) * (w1 - (w1 - w2) / Ps)

        for prts = 1 to NoParticle:
            for tsk = 1 to NoTask:
                r1 = RandomNumber(0, 1)
                r2 = RandomNumber(0, 1)
                v = (w * v) + (c1 * r1 * (pBestMap.get(prts) - pos)) + (c2 * r2 * (gBestValue - pos))
                pos = pos + v

                if pos >= NoVm or pos < 0:
                    pos = RandomNumber(0, NoVm)

                VMachine = getVm(ParticleMap)
                executionTime = getExecutionTime(TaskList, tsk, VMachine)
                executionTime += getVmReadyTime(VmReadyTime, VMachine)

                updateVMReadyTimeMap(VmReadyTime, VMachine, tsk, executionTime)
                updateParticleMap(VmReadyTimeMap, ParticleMap, pos, tsk)
            End for

            pBestValue = getpBestMap(VmReadyTimeMap)

            if pBestValue.executionTime < pBestMap.get(prts):
                pBestMap.prts = pBestValue.executionTime
                ss = ss + 1
            end if

            if pBestValue.executionTime > gBest.executionTime OR (pBestValue.executionTime = gBest.executionTime AND pBestValue.lBest > gBest.lBest):
                gBestMap = ParticleMap.gets(prts)
                gBest = pBestValue
            end if
        end for

        Ps = ss / NoParticle

        if Ps < 0:
            Ps = 1
        end if

        it = it + 1
    end while
end function

gBestAssign = gBestMap
