# **TimerResolutionDriver**  
A "driverless" timer resolution driver that calls `ExSetTimerResolution` from the kernel.  

## **Overview**  
This driver can be mapped to the kernel using [KDU](https://github.com/hfiref0x/KDU) to request a specific timer resolution on **Windows 2004+ systems**.  
On **Windows 11+**, this driver is **mostly obsolete** due to the existence of the GlobalTimerResolutionRequests registry key. 

## **Testing & Benchmarking**  
You can use **MeasureSleep** from [AMIT's repo](https://github.com/valleyofdoom/TimerResolution)  
to test the currently requested resolution.  
Additionally, you can run the **benchmark script** there to compare the **DeltaMS/STDEV** of different timer resolution values.

## **Further Reading**  
For more details about the **timer resolution changes in Windows 2004+**, refer to this article:  
[Windows Timer Resolution – The Great Rule Change](https://randomascii.wordpress.com/2020/10/04/windows-timer-resolution-the-great-rule-change/) 
