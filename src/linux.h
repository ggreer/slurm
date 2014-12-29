int checkinterface(void);
int set_default_interface(void);
int get_stat(void);
#ifdef __linux__
#define BUFSIZE 256
#define _HAVE_CHECKINTERFACE
#define _HAVE_SET_DEFAULT_INTERFACE
#endif
