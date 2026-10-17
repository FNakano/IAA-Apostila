No prompt de comando (cmd, terminal, ...) estão disponíveis comandos para conseguir informação sobre processador e memória do computador, sistema operacional e compilador.

No Ubuntu-Linux, o comando para obter informação sobre o sistema operacional é  e `cat /etc/os-release` sua execução resulta em:

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~</b></font>$ cat /etc/os-release
PRETTY_NAME=&quot;Ubuntu 22.04.5 LTS&quot;
NAME=&quot;Ubuntu&quot;
VERSION_ID=&quot;22.04&quot;
VERSION=&quot;22.04.5 LTS (Jammy Jellyfish)&quot;
VERSION_CODENAME=jammy
ID=ubuntu
ID_LIKE=debian
HOME_URL=&quot;https://www.ubuntu.com/&quot;
SUPPORT_URL=&quot;https://help.ubuntu.com/&quot;
BUG_REPORT_URL=&quot;https://bugs.launchpad.net/ubuntu/&quot;
PRIVACY_POLICY_URL=&quot;https://www.ubuntu.com/legal/terms-and-policies/privacy-policy&quot;
UBUNTU_CODENAME=jammy
</pre>

No termux o comando `termux-info` apresenta informação sobre o aplicativo:

```
Termux Variables:
TERMUX_EXEC__PROC_SELF_EXE=/data/data/com.termux/files/usr/bin/termux-info
TERMUX_VERSION=googleplay.2026.06.21
TERMUX__USER_ID=0
Packages CPU architecture:
aarch64
Subscribed repositories:
URIs: https://termux.net
URIs: https://x11-packages.termux.net/
Updatable packages:
alsa-lib/stable 1.2.16.1 aarch64 [upgradable from: 1.2.15.3]
appstream/stable 1.1.3 aarch64 [upgradable from: 1.1.2]
at-spi2-core/stable 2.60.4 aarch64 [upgradable from: 2.60.3]
bsdtar/stable 3.8.8 aarch64 [upgradable from: 3.8.7]
ca-certificates-java/stable 1:2026.05.14 all [upgradable from: 1:2026.03.19]
ca-certificates/stable 1:2026.05.14 all [upgradable from: 1:2026.03.19]
command-not-found/stable 3.4.1-15 aarch64 [upgradable from: 3.4.1-8]
coreutils/stable 9.11-1 aarch64 [upgradable from: 9.11]
curl/stable 8.21.0 aarch64 [upgradable from: 8.20.0]
dos2unix/stable 7.5.6 aarch64 [upgradable from: 7.5.4]
file-roller-help/x11 44.7 all [upgradable from: 44.6]
file-roller/x11 44.7 aarch64 [upgradable from: 44.6]
fontconfig/stable 2.18.1 aarch64 [upgradable from: 2.17.1-1]
gst-plugins-bad/stable 1.28.4 aarch64 [upgradable from: 1.28.2]
gst-plugins-base/stable 1.28.4 aarch64 [upgradable from: 1.28.2]
gst-plugins-good/stable 1.28.4 aarch64 [upgradable from: 1.28.2]
gstreamer/stable 1.28.4 aarch64 [upgradable from: 1.28.2]
harfbuzz-icu/stable 14.2.1 aarch64 [upgradable from: 14.2.0]
harfbuzz/stable 14.2.1 aarch64 [upgradable from: 14.2.0]
less/stable 704 aarch64 [upgradable from: 692]
libadwaita/x11 1.9.1 aarch64 [upgradable from: 1.9.0]
libaom/stable 3.14.1 aarch64 [upgradable from: 3.13.3]
libarchive/stable 3.8.8 aarch64 [upgradable from: 3.8.7]
libass/stable 0.17.5 aarch64 [upgradable from: 0.17.4-1]
libavif/stable 1.4.2 aarch64 [upgradable from: 1.4.1]
libcurl/stable 8.21.0 aarch64 [upgradable from: 8.20.0]
libde265/stable 1.1.1 aarch64 [upgradable from: 1.0.16-1]
libdrm/stable 2.4.134 aarch64 [upgradable from: 2.4.133]
libexpat/stable 2.8.1 aarch64 [upgradable from: 2.8.0]
libffi/stable 3.5.2 aarch64 [upgradable from: 3.4.7-2]
libgnutls/stable 3.8.13 aarch64 [upgradable from: 3.8.11]
libgraphite/stable 1.3.15 aarch64 [upgradable from: 1.3.14-3]
libheif/stable 1.23.0 aarch64 [upgradable from: 1.21.2-2]
libksba/stable 1.8.0 aarch64 [upgradable from: 1.6.8]
liblzo/stable 2.10-5 aarch64 [upgradable from: 2.10-4]
libnghttp3/stable 1.16.0 aarch64 [upgradable from: 1.15.0]
libngtcp2/stable 1.23.0 aarch64 [upgradable from: 1.22.1]
libpsl/stable 0.22.0 aarch64 [upgradable from: 0.21.5-1]
librsvg/stable 2.62.3 aarch64 [upgradable from: 2.62.1]
libsmartcols/stable 2.42.1-2 aarch64 [upgradable from: 2.41.3]
libsqlite/stable 3.53.2 aarch64 [upgradable from: 3.53.1]
libunbound/stable 1.25.1 aarch64 [upgradable from: 1.25.0]
libuuid/stable 2.42.1-2 aarch64 [upgradable from: 2.41.3]
libwayland/stable 1.25.0 aarch64 [upgradable from: 1.24.0]
libxfce4windowing/x11 4.20.6 aarch64 [upgradable from: 4.20.5]
libxi/stable 1.8.3 aarch64 [upgradable from: 1.8.2-1]
libxkbcommon/x11 1.13.2 aarch64 [upgradable from: 1.13.1]
libxmlb/stable 0.3.27 aarch64 [upgradable from: 0.3.26]
littlecms/stable 2.19.1 aarch64 [upgradable from: 2.19]
mesa-vulkan-icd-swrast/stable 26.0.6-1 aarch64 [upgradable from: 26.0.6]
mesa/stable 26.0.6-1 aarch64 [upgradable from: 26.0.6]
nano/stable 9.1 aarch64 [upgradable from: 9.0]
openal-soft/stable 1.25.2-1 aarch64 [upgradable from: 1.25.1]
openssl/stable 1:3.6.3 aarch64 [upgradable from: 1:3.6.2]
python-pip/stable 26.1.2 all [upgradable from: 26.1.1]
util-linux/stable 2.42.1-2 aarch64 [upgradable from: 2.41.3]
vulkan-loader-generic/stable 1.4.354 aarch64 [upgradable from: 1.4.350]
xfce4-session/x11 4.20.4-1 aarch64 [upgradable from: 4.20.4]
xkeyboard-config/x11 2.48 all [upgradable from: 2.47-1]
termux-tools version:
3.0.9
Android version:
16
Kernel build information:
Linux localhost 6.1.157-android14-11 #1 SMP PREEMPT Mon Sep 21 08:17:47 UTC 2026 aarch64 Android
Device manufacturer:
samsung
Device model:
SM-S721B
LD Variables:
LD_LIBRARY_PATH=
LD_PRELOAD=/data/data/com.termux/files/usr/lib/libtermux-exec.so
Installed termux plugins:
com.termux.x11 versionCode:15
```


No Ubuntu e no Termux, o comando `gcc --version` mostra a versão instalada do compilador. (**nota**: na maioria dos comandos, os argumentos `--version` e `--help` mostram a versão e a documentação, respectivamente.

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/IAA-2026/getHardwareInfo</b></font>$ gcc --version
gcc (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

</pre>

```
~ $ gcc --version
clang version 21.1.8
Target: aarch64-unknown-linux-android30
Thread model: posix
InstalledDir: /data/data/com.termux/files/usr/bin
```

No Linux e no Termux (Android) os comandos são `cat /proc/meminfo` e `cat/proc/cpuinfo` para informação sobre o computador.

Resultado da execução de `cat /proc/meminfo` no Ubuntu: 

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/IAA-2026/getHardwareInfo</b></font>$ cat /proc/meminfo
MemTotal:       24288296 kB
MemFree:        15414924 kB
MemAvailable:   19345804 kB
Buffers:          263364 kB
Cached:          4256348 kB
SwapCached:            0 kB
Active:          5434952 kB
Inactive:        2094556 kB
Active(anon):    3486752 kB
Inactive(anon):        0 kB
Active(file):    1948200 kB
Inactive(file):  2094556 kB
Unevictable:      442492 kB
Mlocked:              16 kB
SwapTotal:       2097148 kB
SwapFree:        2097148 kB
Zswap:                 0 kB
Zswapped:              0 kB
Dirty:              7852 kB
Writeback:             0 kB
AnonPages:       3452404 kB
Mapped:           876144 kB
Shmem:            476920 kB
KReclaimable:     292340 kB
Slab:             558856 kB
SReclaimable:     292340 kB
SUnreclaim:       266516 kB
KernelStack:       21872 kB
PageTables:        59752 kB
SecPageTables:         0 kB
NFS_Unstable:          0 kB
Bounce:                0 kB
WritebackTmp:          0 kB
CommitLimit:    14241296 kB
Committed_AS:   23598160 kB
VmallocTotal:   34359738367 kB
VmallocUsed:       61032 kB
VmallocChunk:          0 kB
Percpu:            23120 kB
HardwareCorrupted:     0 kB
AnonHugePages:         0 kB
ShmemHugePages:   411648 kB
ShmemPmdMapped:        0 kB
FileHugePages:         0 kB
FilePmdMapped:         0 kB
Unaccepted:            0 kB
HugePages_Total:       0
HugePages_Free:        0
HugePages_Rsvd:        0
HugePages_Surp:        0
Hugepagesize:       2048 kB
Hugetlb:               0 kB
DirectMap4k:      314484 kB
DirectMap2M:     4610048 kB
DirectMap1G:    20971520 kB
</pre>

Resultado da execução de `cat /proc/cpuinfo` no Ubuntu: 

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/IAA-2026/getHardwareInfo</b></font>$ cat /proc/cpuinfo
processor	: 0
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 0
cpu cores	: 12
apicid		: 0
initial apicid	: 0
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 1
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 0
cpu cores	: 12
apicid		: 1
initial apicid	: 1
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 2
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 4
cpu cores	: 12
apicid		: 8
initial apicid	: 8
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 3
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 4
cpu cores	: 12
apicid		: 9
initial apicid	: 9
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 4
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 8
cpu cores	: 12
apicid		: 16
initial apicid	: 16
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 5
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 8
cpu cores	: 12
apicid		: 17
initial apicid	: 17
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 6
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.087
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 12
cpu cores	: 12
apicid		: 24
initial apicid	: 24
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 7
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 12
cpu cores	: 12
apicid		: 25
initial apicid	: 25
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 8
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.065
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 16
cpu cores	: 12
apicid		: 32
initial apicid	: 32
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 9
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 16
cpu cores	: 12
apicid		: 33
initial apicid	: 33
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 10
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.041
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 20
cpu cores	: 12
apicid		: 40
initial apicid	: 40
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 11
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.083
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 20
cpu cores	: 12
apicid		: 41
initial apicid	: 41
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 12
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 815.097
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 24
cpu cores	: 12
apicid		: 48
initial apicid	: 48
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 13
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 24
cpu cores	: 12
apicid		: 49
initial apicid	: 49
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 14
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 811.178
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 28
cpu cores	: 12
apicid		: 56
initial apicid	: 56
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 15
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 28
cpu cores	: 12
apicid		: 57
initial apicid	: 57
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 16
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 856.895
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 36
cpu cores	: 12
apicid		: 72
initial apicid	: 72
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 17
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 37
cpu cores	: 12
apicid		: 74
initial apicid	: 74
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 18
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 38
cpu cores	: 12
apicid		: 76
initial apicid	: 76
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

processor	: 19
vendor_id	: GenuineIntel
cpu family	: 6
model		: 151
model name	: 12th Gen Intel(R) Core(TM) i7-12700
stepping	: 2
microcode	: 0x3e
cpu MHz		: 800.000
cache size	: 25600 KB
physical id	: 0
siblings	: 20
core id		: 39
cpu cores	: 12
apicid		: 78
initial apicid	: 78
fpu		: yes
fpu_exception	: yes
cpuid level	: 32
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf tsc_known_freq pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch cpuid_fault epb ssbd ibrs ibpb stibp ibrs_enhanced tpr_shadow flexpriority ept vpid ept_ad fsgsbase tsc_adjust bmi1 avx2 smep bmi2 erms invpcid rdseed adx smap clflushopt clwb intel_pt sha_ni xsaveopt xsavec xgetbv1 xsaves split_lock_detect user_shstk avx_vnni dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp hwp_pkg_req hfi vnmi umip pku ospke waitpkg gfni vaes vpclmulqdq tme rdpid movdiri movdir64b fsrm md_clear serialize pconfig arch_lbr ibt flush_l1d arch_capabilities ibpb_exit_to_user
vmx flags	: vnmi preemption_timer posted_intr invvpid ept_x_only ept_ad ept_1gb flexpriority apicv tsc_offset vtpr mtf vapic ept vpid unrestricted_guest vapic_reg vid ple shadow_vmcs ept_mode_based_exec tsc_scaling usr_wait_pause
bugs		: spectre_v1 spectre_v2 spec_store_bypass swapgs eibrs_pbrsb rfds bhi vmscape
bogomips	: 4224.00
clflush size	: 64
cache_alignment	: 64
address sizes	: 46 bits physical, 48 bits virtual
power management:

<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/IAA-2026/getHardwareInfo</b></font>$ 

</pre>

No Termux (Android)


> Fábio:
Termux Variables:
TERMUX_EXEC__PROC_SELF_EXE=/data/data/com.termux/files/usr/bin/termux-info
TERMUX_VERSION=googleplay.2026.06.21
TERMUX__USER_ID=0
Packages CPU architecture:
aarch64
Subscribed repositories:
URIs: https://termux.net
URIs: https://x11-packages.termux.net/
Updatable packages:
alsa-lib/stable 1.2.16.1 aarch64 [upgradable from: 1.2.15.3]
appstream/stable 1.1.3 aarch64 [upgradable from: 1.1.2]
at-spi2-core/stable 2.60.4 aarch64 [upgradable from: 2.60.3]
bsdtar/stable 3.8.8 aarch64 [upgradable from: 3.8.7]
ca-certificates-java/stable 1:2026.05.14 all [upgradable from: 1:2026.03.19]
ca-certificates/stable 1:2026.05.14 all [upgradable from: 1:2026.03.19]
command-not-found/stable 3.4.1-15 aarch64 [upgradable from: 3.4.1-8]
coreutils/stable 9.11-1 aarch64 [upgradable from: 9.11]
curl/stable 8.21.0 aarch64 [upgradable from: 8.20.0]
dos2unix/stable 7.5.6 aarch64 [upgradable from: 7.5.4]
file-roller-help/x11 44.7 all [upgradable from: 44.6]
file-roller/x11 44.7 aarch64 [upgradable from: 44.6]
fontconfig/stable 2.18.1 aarch64 [upgradable from: 2.17.1-1]
gst-plugins-bad/stable 1.28.4 aarch64 [upgradable from: 1.28.2]
gst-plugins-base/stable 1.28.4 aarch64 [upgradable from: 1.28.2]
gst-plugins-good/stable 1.28.4 aarch64 [upgradable from: 1.28.2]
gstreamer/stable 1.28.4 aarch64 [upgradable from: 1.28.2]
harfbuzz-icu/stable 14.2.1 aarch64 [upgradable from: 14.2.0]
harfbuzz/stable 14.2.1 aarch64 [upgradable from: 14.2.0]
less/stable 704 aarch64 [upgradable from: 692]
libadwaita/x11 1.9.1 aarch64 [upgradable from: 1.9.0]
libaom/stable 3.14.1 aarch64 [upgradable from: 3.13.3]
libarchive/stable 3.8.8 aarch64 [upgradable from: 3.8.7]
libass/stable 0.17.5 aarch64 [upgradable from: 0.17.4-1]
libavif/stable 1.4.2 aarch64 [upgradable from: 1.4.1]
libcurl/stable 8.21.0 aarch64 [upgradable from: 8.20.0]
libde265/stable 1.1.1 aarch64 [upgradable from: 1.0.16-1]
libdrm/stable 2.4.134 aarch64 [upgradable from: 2.4.133]
libexpat/stable 2.8.1 aarch64 [upgradable from: 2.8.0]
libffi/stable 3.5.2 aarch64 [upgradable from: 3.4.7-2]
libgnutls/stable 3.8.13 aarch64 [upgradable from: 3.8.11]
libgraphite/stable 1.3.15 aarch64 [upgradable from: 1.3.14-3]
libheif/stable 1.23.0 aarch64 [upgradable from: 1.21.2-2]
libksba/stable 1.8.0 aarch64 [upgradable from: 1.6.8]
liblzo/stable 2.10-5 aarch64 [upgradable from: 2.10-4]
libnghttp3/stable 1.16.0 aarch64 [upgradable from: 1.15.0]
libngtcp2/stable 1.23.0 aarch64 [upgradable from: 1.22.1]
libpsl/stable 0.22.0 aarch64 [upgradable from: 0.21.5-1]
librsvg/stable 2.62.3 aarch64 [upgradable from: 2.62.1]
libsmartcols/stable 2.42.1-2 aarch64 [upgradable from: 2.41.3]
libsqlite/stable 3.53.2 aarch64 [upgradable from: 3.53.1]
libunbound/stable 1.25.1 aarch64 [upgradable from: 1.25.0]
libuuid/stable 2.42.1-2 aarch64 [upgradable from: 2.41.3]
libwayland/stable 1.25.0 aarch64 [upgradable from: 1.24.0]
libxfce4windowing/x11 4.20.6 aarch64 [upgradable from: 4.20.5]
libxi/stable 1.8.3 aarch64 [upgradable from: 1.8.2-1]
libxkbcommon/x11 1.13.2 aarch64 [upgradable from: 1.13.1]
libxmlb/stable 0.3.27 aarch64 [upgradable from: 0.3.26]
littlecms/stable 2.19.1 aarch64 [upgradable from: 2.19]
mesa-vulkan-icd-swrast/stable 26.0.6-1 aarch64 [upgradable from: 26.0.6]
mesa/stable 26.0.6-1 aarch64 [upgradable from: 26.0.6]
nano/stable 9.1 aarch64 [upgradable from: 9.0]
openal-soft/stable 1.25.2-1 aarch64 [upgradable from: 1.25.1]
openssl/stable 1:3.6.3 aarch64 [upgradable from: 1:3.6.2]
python-pip/stable 26.1.2 all [upgradable from: 26.1.1]
util-linux/stable 2.42.1-2 aarch64 [upgradable from: 2.41.3]
vulkan-loader-generic/stable 1.4.354 aarch64 [upgradable from: 1.4.350]
xfce4-session/x11 4.20.4-1 aarch64 [upgradable from: 4.20.4]
xkeyboard-config/x11 2.48 all [upgradable from: 2.47-1]
termux-tools version:
3.0.9
Android version:
16

> Fábio:
Kernel build information:
Linux localhost 6.1.157-android14-11 #1 SMP PREEMPT Mon Sep 21 08:17:47 UTC 2026 aarch64 Android
Device manufacturer:
samsung
Device model:
SM-S721B
LD Variables:
LD_LIBRARY_PATH=
LD_PRELOAD=/data/data/com.termux/files/usr/lib/libtermux-exec.so
Installed termux plugins:
com.termux.x11 versionCode:15

> Fábio:
com.termux.x11 versionCode:15
~ $ gcc --version
clang version 21.1.8
Target: aarch64-unknown-linux-android30
Thread model: posix
InstalledDir: /data/data/com.termux/files/usr/bin
~ $

> Fábio:
MemTotal:        7397720 kB
MemFree:          648756 kB
MemAvailable:    3045364 kB

> Fábio:
VmallocTotal:   259653632 kB
VmallocUsed:      260948 kB

> Fábio:
~ $ cat /proc/cpuinfo
processor       : 0
BogoMIPS        : 51.20
Features        : fp asimd evtstrm aes pmull sha1 sha2 crc32 atomics fphp asimdhp cpuid asimdrdm jscvt fcma lrcpc dcpop sha3 sm3 sm4 asimddp sha512 sve asimdfhm dit uscat ilrcpc flagm sb paca pacg dcpodp sve2 sveaes svepmull svebitperm svesha3 svesm4 flagm2 frint svei8mm svebf16 i8mm bf16 dgh bti ecv afp wfxt
CPU implementer : 0x41
CPU architecture: 8
CPU variant     : 0x0
CPU part        : 0xd80
CPU revision    : 1

> Fábio:
Welcome to Termux

Docs:       https://doc.termux.com
Community:  https://community.termux.com

Working with packages:
 - Search:  pkg search <query>
 - Install: pkg install <package>
 - Upgrade: pkg upgrade

Report issues at https://bugs.termux.com
~ $ cat /proc/meminfo
MemTotal:        7397720 kB
MemFree:          648756 kB
MemAvailable:    3045364 kB
Buffers:            1840 kB
Cached:          2345812 kB
SwapCached:         4300 kB
Active:          1974952 kB
Inactive:        1743660 kB
Active(anon):    1401512 kB
Inactive(anon):   385040 kB
Active(file):     573440 kB
Inactive(file):  1358620 kB
Unevictable:        4660 kB
Mlocked:            4660 kB
SwapTotal:       8388604 kB
SwapFree:        6169016 kB
Dirty:               492 kB
Writeback:             0 kB
AnonPages:       1754892 kB
Mapped:          1031980 kB
Shmem:             35072 kB
KReclaimable:     336248 kB
Slab:             841412 kB
SReclaimable:     246384 kB
SUnreclaim:       595028 kB
KernelStack:       94512 kB
ShadowCallStack:       0 kB
PageTables:       180460 kB
SecPageTables:         0 kB
NFS_Unstable:          0 kB
Bounce:                0 kB
WritebackTmp:          0 kB
CommitLimit:    11882664 kB
Committed_AS:   294915816 kB
VmallocTotal:   259653632 kB
VmallocUsed:      260948 kB
VmallocChunk:          0 kB
Percpu:            14720 kB
AnonHugePages:      8192 kB
ShmemHugePages:        0 kB
ShmemPmdMapped:        0 kB
FileHugePages:         0 kB
FilePmdMapped:         0 kB
HugepagePool:          0 kB
CmaTotal:         372736 kB
CmaFree:           18940 kB
DmaHeapPool:       89864 kB
GpuSwap:               0 kB
GpuTotal:         162488 kB
system:            33112 kB
system-uncached:  173820 kB
RbinTotal:        409600 kB
RbinAlloced:           0 kB
RbinFree:          25836 kB
RbinCached:       383764 kB
NpuSystem:         47104 kB
zram0:            619152 kB
~ $ cat /proc/cpuinfo
processor       : 0
BogoMIPS        : 51.20
Features        : fp asimd evtstrm aes pmull sha1 sha2 crc32 atomics fphp asimdhp cpuid asimdrdm jscvt fcma lrcpc dcpop sha3 sm3 sm4 asimddp sha512 sve asimdfhm dit uscat ilrcpc flagm sb paca pacg dcpodp sve2 sveaes svepmull svebitperm svesha3 svesm4 flagm2 frint svei8mm svebf16 i8mm bf16 dgh bti ecv afp wfxt
CPU implementer : 0x41
CPU architecture: 8
CPU variant     : 0x0
CPU part        : 0xd80
CPU revision    : 1

processor       : 1
BogoMIPS        : 51.20
Features        : fp asimd evtstrm aes pmull sha1 sha2 crc32 atomics fphp asimdhp cpuid asimdrdm jscvt fcma lrcpc dcpop sha3 sm3 sm4 asimddp sha512 sve asimdfhm dit uscat ilrcpc flagm sb paca pacg dcpodp sve2 sveaes svepmull svebitperm svesha3 svesm4 flagm2 frint svei8mm svebf16 i8mm bf16 dgh bti ecv afp wfxt
CPU implementer : 0x41
CPU architecture: 8
CPU variant     : 0x0
CPU part        : 0xd80
CPU revision    : 1

processor       : 2
BogoMIPS        : 51.20
Features        : fp asimd evtstrm aes pmull sha1 sha2 crc32 atomics fphp asimdhp cpuid asimdrdm jscvt fcma lrcpc dcpop sha3 sm3 sm4 asimddp sha512 sve asimdfhm dit uscat ilrcpc flagm sb paca pacg dcpodp sve2 sveaes svepmull svebitperm svesha3 svesm4 flagm2 frint svei8mm svebf16 i8mm bf16 dgh bti ecv afp wfxt
CPU implementer : 0x41
CPU architecture: 8
CPU variant     : 0x0
CPU part        : 0xd80
CPU revision    : 1

processor       : 3
BogoMIPS        : 51.20
Features        : fp asimd evtstrm aes pmull sha1 sha2 crc32 atomics fphp asimdhp cpuid asimdrdm jscvt fcma lrcpc dcpop sha3 sm3 sm4 asimddp sha512 sve asimdfhm dit uscat ilrcpc flagm sb paca pacg dcpodp sve2 sveaes svepmull svebitperm svesha3 svesm4 flagm2 frint svei8mm svebf16 i8mm bf16 dgh bti ecv afp wfxt
CPU implementer : 0x41
CPU architecture: 8
CPU variant     : 0x0
CPU part        : 0xd80
CPU revision    : 1

processor       : 4
BogoMIPS        : 51.20
Features        : fp asimd evtstrm aes pmull sha1 sha2 crc32 atomics fphp asimdhp cpuid asimdrdm jscvt fcma lrcpc dcpop sha3 sm3 sm4 asimddp sha512 sve asimdfhm dit uscat ilrcpc flagm sb paca pacg dcpodp sve2 sveaes svepmull svebitperm svesha3 svesm4 flagm2 frint svei8mm svebf16 i8mm bf16 dgh bti

> Fábio:
ecv afp wfxt
CPU implementer : 0x41
CPU architecture: 8
CPU variant     : 0x0
CPU part        : 0xd81
CPU revision    : 1

processor       : 5
BogoMIPS        : 51.20
Features        : fp asimd evtstrm aes pmull sha1 sha2 crc32 atomics fphp asimdhp cpuid asimdrdm jscvt fcma lrcpc dcpop sha3 sm3 sm4 asimddp sha512 sve asimdfhm dit uscat ilrcpc flagm sb paca pacg dcpodp sve2 sveaes svepmull svebitperm svesha3 svesm4 flagm2 frint svei8mm svebf16 i8mm bf16 dgh bti ecv afp wfxt
CPU implementer : 0x41
CPU architecture: 8
CPU variant     : 0x0
CPU part        : 0xd81
CPU revision    : 1

O exynos 2600e do SM-S721B tem 10 cores, a saída de `cat /proc/cpuinfo` foi truncada. 

No Ubuntu

cat /etc/os-release

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/IAA-2026/getHardwareInfo</b></font>$ cat /etc/os-release
PRETTY_NAME=&quot;Ubuntu 22.04.5 LTS&quot;
NAME=&quot;Ubuntu&quot;
VERSION_ID=&quot;22.04&quot;
VERSION=&quot;22.04.5 LTS (Jammy Jellyfish)&quot;
VERSION_CODENAME=jammy
ID=ubuntu
ID_LIKE=debian
HOME_URL=&quot;https://www.ubuntu.com/&quot;
SUPPORT_URL=&quot;https://help.ubuntu.com/&quot;
BUG_REPORT_URL=&quot;https://bugs.launchpad.net/ubuntu/&quot;
PRIVACY_POLICY_URL=&quot;https://www.ubuntu.com/legal/terms-and-policies/privacy-policy&quot;
UBUNTU_CODENAME=jammy
</pre>



No Windows o comando `systeminfo` apresenta informação sobre o sistema operacional e sobre o computador:

```
Microsoft Windows [versão 10.0.22631.6199]
(c) Microsoft Corporation. Todos os direitos reservados.

C:\Users\fabio>systeminfo

Nome do host:                              SUPER
Nome do sistema operacional:               Microsoft Windows 11 Home Single Language
Versão do sistema operacional:             10.0.22631 N/A compilação 22631
Fabricante do sistema operacional:         Microsoft Corporation
Configuração do SO:                        Estação de trabalho autônoma
Tipo de compilação do sistema operacional: Multiprocessor Free
Proprietário registrado:                   fabio
Organização registrada:                    N/A
Identificação do produto:                  xxxxx-xxxxx-xxxxx-xxxxx
Data da instalação original:               21/09/2022, 12:44:58
Tempo de Inicialização do Sistema:         10/10/2026, 22:05:46
Fabricante do sistema:                     Dell Inc.
Modelo do sistema:                         OptiPlex 5000
Tipo de sistema:                           x64-based PC
Processador(es):                           1 processador(es) instalado(s).
                                           [01]: Intel64 Family 6 Model 151 Stepping 2 GenuineIntel ~2100 Mhz
Versão do BIOS:                            Dell Inc. 1.38.0, 24/12/2025
Pasta do Windows:                          C:\Windows
Pasta do sistema:                          C:\Windows\system32
Inicializar dispositivo:                   \Device\HarddiskVolume1
Localidade do sistema:                     pt-br;Português (Brasil)
Localidade de entrada:                     pt-br;Português (Brasil)
Fuso horário:                              (UTC-03:00) Brasília
Memória física total:                      24.265 MB
Memória física disponível:                 16.908 MB
Memória Virtual: Tamanho Máximo:           27.013 MB
Memória Virtual: Disponível:               19.826 MB
Memória Virtual: Em Uso:                   7.187 MB
Local(is) de arquivo de paginação:         C:\pagefile.sys
Domínio:                                   WORKGROUP
Servidor de Logon:                         \\SUPER
Hotfix(es):                                5 hotfix(es) instalado(s).
                                           [01]: KBxxxxxxx
                                           [02]: KBxxxxxxx
                                           [03]: KBxxxxxxx
                                           [04]: KBxxxxxxx
                                           [05]: KBxxxxxxx
Placa(s) de Rede:                          3 NIC(s) instalado(s).
                                           [01]: Intel(R) Ethernet Connection (17) I219-LM
                                                 Nome da conexão: Ethernet
                                                 DHCP ativado:    Sim
                                                 Servidor DHCP:   192.168.0.1
                                                 Endereço(es) IP
                                                 [01]: 192.168.0.11
                                                 [02]: fe80::d0ae:2fd4:31dd:a05e
                                                 [03]: 2804:14c:bf22:ab8a:a955:fb6c:2b29:4c8
                                                 [04]: 2804:14c:bf22:ab8a:63ec:d877:5f64:1251
                                           [02]: Bluetooth Device (Personal Area Network)
                                                 Nome da conexão: Conexão de Rede Bluetooth
                                                 Status:          Mídia desconectada
                                           [03]: Realtek RTL8188EU Wireless LAN 802.11n USB 2.0 Network Adapter
                                                 Nome da conexão: Wi-Fi 2
                                                 Status:          Mídia desconectada
Requisitos do Hyper-V:                     Hipervisor detectado. Recursos necessários para o Hyper-V não serão exibidos.

C:\Users\fabio>
```

No Windows o comando `cpu list full` apresenta informação sobre o processador:


```
C:\Users\fabio>wmic cpu list full


AddressWidth=64
Architecture=9
Availability=3
Caption=Intel64 Family 6 Model 151 Stepping 2
ConfigManagerErrorCode=
ConfigManagerUserConfig=
CpuStatus=1
CreationClassName=Win32_Processor
CurrentClockSpeed=2100
CurrentVoltage=12
DataWidth=64
Description=Intel64 Family 6 Model 151 Stepping 2
DeviceID=CPU0
ErrorCleared=
ErrorDescription=
ExtClock=100
Family=198
InstallDate=
L2CacheSize=12288
L2CacheSpeed=
LastErrorCode=
Level=6
LoadPercentage=0
Manufacturer=GenuineIntel
MaxClockSpeed=2100
Name=12th Gen Intel(R) Core(TM) i7-12700
OtherFamilyDescription=
PNPDeviceID=
PowerManagementCapabilities=
PowerManagementSupported=FALSE
ProcessorId=BFEBFBFF00090672
ProcessorType=3
Revision=
Role=CPU
SocketDesignation=U3E1
Status=OK
StatusInfo=3
Stepping=
SystemCreationClassName=Win32_ComputerSystem
SystemName=SUPER
UniqueId=
UpgradeMethod=1
Version=
VoltageCaps=



C:\Users\fabio>
```

No MacOS não tive a oportunidade de testar. Tenho alguns links que indicam o caminho: https://apple.stackexchange.com/questions/352769/does-macos-have-a-command-to-retrieve-detailed-cpu-information-like-proc-cpuinf , https://support.apple.com/en-qa/guide/activity-monitor/actmntr1004/mac

A informação que eu gostaria que estivesse presente é:
  
Nome do sistema operacional:               Microsoft Windows 11 Home Single Language
Versão do sistema operacional:             10.0.22631 N/A compilação 22631
Fabricante do sistema operacional:         Microsoft Corporation
Configuração do SO:                        Estação de trabalho autônoma
Tipo de compilação do sistema operacional: Multiprocessor Free
MaxClockSpeed=2100
Name=12th Gen Intel(R) Core(TM) i7-12700
Memória física total:                      24.265 MB
Memória física disponível:                 16.908 MB
Memória Virtual: Tamanho Máximo:           27.013 MB
Memória Virtual: Disponível:               19.826 MB
Memória Virtual: Em Uso:                   7.187 MB

PRETTY_NAME='Ubuntu 22.04.5 LTS'
model name	: 12th Gen Intel(R) Core(TM) i7-12700
MemTotal:       24288296 kB
MemFree:        15414924 kB
MemAvailable:   19345804 kB
VmallocTotal:   34359738367 kB
VmallocUsed:       61032 kB


TERMUX_VERSION=googleplay.2026.06.21
TERMUX__USER_ID=0
Packages CPU architecture: aarch64
Android version: 16
Kernel build information: Linux localhost 6.1.157-android14-11 #1 SMP PREEMPT Mon Sep 21 08:17:47 UTC 2026 aarch64 Android
Device manufacturer: samsung
Device model: SM-S721B
MemTotal:        7397720 kB
MemFree:          648756 kB
MemAvailable:    3045364 kB
VmallocTotal:   259653632 kB
VmallocUsed:      260948 kB
CPU implementer : 0x41
CPU architecture: 8
CPU variant     : 0x0
CPU part        : 0xd80
CPU revision    : 1

C compiler: gcc (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0
