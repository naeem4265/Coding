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

