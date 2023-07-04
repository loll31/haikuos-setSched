# haikuos-setSched
Haiku-OS tool to set scheduler mode

setSched : simple cmdline tool to set/show HaikuOS scheduler mode.

usage: setSched [-e|-p|-h]
 -e : economic mode
 -p : performance/low latency mode


Build: 
From Terminal, call make in setSched folder. 
Binary is generated under Objects.<arch>-<compiler version> folder.


History :
2023/07/04 : v1.0.0 : initial version from user request about bug #11823


Todo list:
+ add Deskbar repliquant to show current mode, swap between modes


Copyright (c) 2023 Laurent Jean-Rigaud beosland at free.fr
