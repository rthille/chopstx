#define USB_MAX_PACKET_SIZE 64	/* For FS device */

enum STANDARD_REQUESTS
{
  GET_STATUS = 0,
  CLEAR_FEATURE,
  RESERVED1,
  SET_FEATURE,
  RESERVED2,
  SET_ADDRESS,
  GET_DESCRIPTOR,
  SET_DESCRIPTOR,
  GET_CONFIGURATION,
  SET_CONFIGURATION,
  GET_INTERFACE,
  SET_INTERFACE,
  SYNCH_FRAME,
  TOTAL_REQUEST  /* Total number of Standard request */
};

/* The state machine states of a control pipe */
enum CONTROL_STATE
{
  WAIT_SETUP,
  IN_DATA,
  OUT_DATA,
  LAST_IN_DATA,
  WAIT_STATUS_IN,
  WAIT_STATUS_OUT,
  STALLED,
};

enum FEATURE_SELECTOR
{
  FEATURE_ENDPOINT_HALT=0,
  FEATURE_DEVICE_REMOTE_WAKEUP=1
};
