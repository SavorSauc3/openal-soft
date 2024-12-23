/* Define to 1 if the given backend is enabled, else 0 */

#ifdef GRANITE_SYSTEM_LINUX
#define HAVE_ALSA 0
#define HAVE_OSS 0
#define HAVE_PIPEWIRE 1
#define HAVE_SOLARIS 0
#define HAVE_SNDIO 0
#define HAVE_PORTAUDIO 1
#define HAVE_PULSEAUDIO 1
#define HAVE_JACK 0
#define HAVE_OTHERIO 0
#define HAVE_SDL3 0
#define HAVE_SDL2 0
#endif

#ifdef GRANITE_SYSTEM_WINDOWS
#define HAVE_ALSA 0
#define HAVE_OSS 0
#define HAVE_PIPEWIRE 0
#define HAVE_SOLARIS 0
#define HAVE_SNDIO 0
#define HAVE_WASAPI 1
#define HAVE_DSOUND 1
#define HAVE_WINMM 1
#define HAVE_PORTAUDIO 0
#define HAVE_PULSEAUDIO 0
#define HAVE_JACK 0
#define HAVE_COREAUDIO 0
#define HAVE_OPENSL 0
#define HAVE_OBOE 0
#define HAVE_OTHERIO 0
#define HAVE_WAVE 1
#define HAVE_SDL3 0
#define HAVE_SDL2 0
#endif

#ifdef GRANITE_SYSTEM_MAC
#define HAVE_ALSA 0
#define HAVE_OSS 0
#define HAVE_PIPEWIRE 0
#define HAVE_SOLARIS 0
#define HAVE_SNDIO 0
#define HAVE_WASAPI 0
#define HAVE_DSOUND 0
#define HAVE_WINMM 0
#define HAVE_PORTAUDIO 0
#define HAVE_PULSEAUDIO 0
#define HAVE_JACK 0
#define HAVE_COREAUDIO 1
#define HAVE_OPENSL 0
#define HAVE_OBOE 0
#define HAVE_OTHERIO 0
#define HAVE_WAVE 1
#define HAVE_SDL3 0
#define HAVE_SDL2 0
#endif
