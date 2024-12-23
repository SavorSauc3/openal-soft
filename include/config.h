// Define the alignment attribute for externally callable functions.
#define FORCE_ALIGN __attribute__((aligned(16))) // Example alignment, adjust as needed

// Define if HRTF data is embedded in the library
#define ALSOFT_EMBED_HRTF_DATA 1

// Define if we have the proc_pidpath function
#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_PROC_PIDPATH 1
#else
#define HAVE_PROC_PIDPATH 0
#endif

// Define if we have dlfcn.h
#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_DLFCN_H 1
#else
#define HAVE_DLFCN_H 0
#endif

// Define if we have pthread_np.h
#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_PTHREAD_NP_H 1
#else
#define HAVE_PTHREAD_NP_H 0
#endif

// Define if we have cpuid.h
#ifdef GRANITE_SYSTEM_WINDOWS
#define HAVE_CPUID_H 1
#else
#define HAVE_CPUID_H 0
#endif

// Define if we have intrin.h
#ifdef GRANITE_SYSTEM_WINDOWS
#define HAVE_INTRIN_H 1
#else
#define HAVE_INTRIN_H 0
#endif

// Define if we have guiddef.h
#ifdef GRANITE_SYSTEM_WINDOWS
#define HAVE_GUIDDEF_H 1
#else
#define HAVE_GUIDDEF_H 0
#endif

// Define if we have GCC's __get_cpuid()
#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_GCC_GET_CPUID 1
#else
#define HAVE_GCC_GET_CPUID 0
#endif

// Define if we have the __cpuid() intrinsic
#ifdef GRANITE_SYSTEM_WINDOWS
#define HAVE_CPUID_INTRINSIC 1
#else
#define HAVE_CPUID_INTRINSIC 0
#endif

// Define if we have pthread_setschedparam()
#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_PTHREAD_SETSCHEDPARAM 1
#else
#define HAVE_PTHREAD_SETSCHEDPARAM 0
#endif

// Define if we have pthread_setname_np()
#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_PTHREAD_SETNAME_NP 1
#else
#define HAVE_PTHREAD_SETNAME_NP 0
#endif

// Define if we have pthread_set_name_np()
#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_PTHREAD_SET_NAME_NP 1
#else
#define HAVE_PTHREAD_SET_NAME_NP 0
#endif

// Define to 1 if we have DBus/RTKit, else 0
#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_RTKIT 1
#else
#define HAVE_RTKIT 0
#endif

// Define to 1 if building for winuwp, else 0
#ifdef GRANITE_SYSTEM_WINDOWS
#define ALSOFT_UWP 1
#else
#define ALSOFT_UWP 0
#endif

// Define to 1 if building with legacy EAX API support, else 0
#define ALSOFT_EAX 0 // Adjust based on your build configuration
