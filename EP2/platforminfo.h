// orientações para UBUNTU e para WINDOWS
#define CPU "12th Gen Intel(R) Core(TM) i7-12700"  // modelname em cpuinfo ou name em wmic cpu list full
#define RAM "24288296 kB"  // memória física total em systeminfo ou memTotal em meminfo
#define RAM_FREE "22822432 kB" // memFree em meminfo, sem equivalente no Windows, pode definir como "WINDOWS"
#define RAM_AVAIL "23365484 kB" // memAvailable em meminfo ou Memória Física Disponível em systeminfo
#define VM "34359738367 kB" // VmallocTotal em meminfo ou Memória Virtual:Tamanho Máximo em systeminfo
#define VM_USED "45832 kB"  // VmallocUsed em meminfo ou Memória Virtual: Em Uso em sysinfo
#define OS "Ubuntu 22.04.5 LTS"  // pretty name em os-release ou Nome do Sistema Operacional em systeminfo
#define OS_VERSION "22.04.5 LTS (Jammy Jellyfish)" // Versão do Sistema Operacional em systeminfo ou VERSION em os-release
#define CC_VERSION "gcc (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0" // primeira linha de gcc --version ou equivalente para seu compilador

#if 0
// orientações para ANDROID
#define CPU "SM-S721B"  // device model em termux-info
#define RAM "7397720 kB"  // memória física total em meminfo
#define RAM_FREE "648756 kB" // memFree em meminfo"
#define RAM_AVAIL "3045364 kB" // memAvailable em meminfo 
#define VM "259653632 kB" // VmallocTotal em meminfo 
#define VM_USED "260948 kB"  // VmallocUsed em meminfo
#define OS "16"  // Android version em termux-info
#define OS_VERSION "googleplay.2026.06.21" // TERMUX VERSION em termux-info
#define CC_VERSION "clang version 21.1.8" // primeira linha de gcc --version ou equivalente para seu compilador
#endif
