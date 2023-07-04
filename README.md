## haikuos-setSched

[Haiku-OS](https://www.haiku-os.org/) cmdline tool to set scheduler mode between Perfomance/low latency (default) and Economic.

setSched can also show current HaikuOS scheduler mode.

## Usage

```sh
$ setSched -h
usage: setSched [-e|-p|-h]
 -e : economic mode
 -p : performance/low latency mode
```

To apply sheduler mode at boot time, add setSched at the end of $HOME/config/settings/boot/UserBootscript file.

```sh
../..
# To launch certain applications at boot-up, put links to those applications in
# the above boot launch directory.

# set economic mode
/boot/home/setSched-1_0_0/objects.x86_64-cc11-release/setSched -e
```

> Do not forget to update setSched path !


## Build: 
From Terminal, call make in setSched folder. 
Binary is generated under Objects.{arch}-{compiler version} folder.


## History :
2023/07/04 : v1.0.0 : initial version from user request about bug [#11823](https://dev.haiku-os.org/ticket/11823)


## Todo list:
+ add Deskbar repliquant to show current mode, swap between modes

### Author

**Laurent Jean-Rigaud**

### License

Copyright © 2023, [Laurent Jean-Rigaud](https://github.com/loll31).
Released under the [GNU v2 License](LICENSE).

***

