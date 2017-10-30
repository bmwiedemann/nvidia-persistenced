/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NVPD_RPC_H_RPCGEN
#define _NVPD_RPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


enum NvPdStatus {
	NVPD_SUCCESS = 0,
	NVPD_ERR_DAEMON_NOT_PRESENT = 1,
	NVPD_ERR_DEVICE_NOT_FOUND = 2,
	NVPD_ERR_DRIVER = 3,
	NVPD_ERR_INSUFFICIENT_RESOURCES = 4,
	NVPD_ERR_INVALID_ARGUMENT = 5,
	NVPD_ERR_IO = 6,
	NVPD_ERR_PERMISSIONS = 7,
	NVPD_ERR_RPC = 8,
	NVPD_ERR_USER_NOT_FOUND = 9,
	NVPD_ERR_NUMA_FAILURE = 10,
	NVPD_ERR_UNKNOWN = 11,
};
typedef enum NvPdStatus NvPdStatus;

struct NvPciDevice {
	int domain;
	int bus;
	int slot;
	int function;
};
typedef struct NvPciDevice NvPciDevice;

enum NvPersistenceMode {
	NV_PERSISTENCE_MODE_DISABLED = 0,
	NV_PERSISTENCE_MODE_ENABLED = 1,
};
typedef enum NvPersistenceMode NvPersistenceMode;

struct SetPersistenceModeArgs {
	NvPciDevice device;
	NvPersistenceMode mode;
};
typedef struct SetPersistenceModeArgs SetPersistenceModeArgs;

struct GetPersistenceModeArgs {
	NvPciDevice device;
};
typedef struct GetPersistenceModeArgs GetPersistenceModeArgs;

struct GetPersistenceModeRes {
	NvPdStatus status;
	union {
		NvPersistenceMode mode;
	} GetPersistenceModeRes_u;
};
typedef struct GetPersistenceModeRes GetPersistenceModeRes;

#define NVPD_PROG 35006
#define VersionOne 1

#if defined(__STDC__) || defined(__cplusplus)
#define nvPdSetPersistenceMode 1
extern  NvPdStatus * nvpdsetpersistencemode_1(SetPersistenceModeArgs *, CLIENT *);
extern  NvPdStatus * nvpdsetpersistencemode_1_svc(SetPersistenceModeArgs *, struct svc_req *);
#define nvPdGetPersistenceMode 2
extern  GetPersistenceModeRes * nvpdgetpersistencemode_1(GetPersistenceModeArgs *, CLIENT *);
extern  GetPersistenceModeRes * nvpdgetpersistencemode_1_svc(GetPersistenceModeArgs *, struct svc_req *);
extern int nvpd_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define nvPdSetPersistenceMode 1
extern  NvPdStatus * nvpdsetpersistencemode_1();
extern  NvPdStatus * nvpdsetpersistencemode_1_svc();
#define nvPdGetPersistenceMode 2
extern  GetPersistenceModeRes * nvpdgetpersistencemode_1();
extern  GetPersistenceModeRes * nvpdgetpersistencemode_1_svc();
extern int nvpd_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_NvPdStatus (XDR *, NvPdStatus*);
extern  bool_t xdr_NvPciDevice (XDR *, NvPciDevice*);
extern  bool_t xdr_NvPersistenceMode (XDR *, NvPersistenceMode*);
extern  bool_t xdr_SetPersistenceModeArgs (XDR *, SetPersistenceModeArgs*);
extern  bool_t xdr_GetPersistenceModeArgs (XDR *, GetPersistenceModeArgs*);
extern  bool_t xdr_GetPersistenceModeRes (XDR *, GetPersistenceModeRes*);

#else /* K&R C */
extern bool_t xdr_NvPdStatus ();
extern bool_t xdr_NvPciDevice ();
extern bool_t xdr_NvPersistenceMode ();
extern bool_t xdr_SetPersistenceModeArgs ();
extern bool_t xdr_GetPersistenceModeArgs ();
extern bool_t xdr_GetPersistenceModeRes ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_NVPD_RPC_H_RPCGEN */
