/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/* Do not edit directly, auto-generated from: */
/*	Documentation/netlink/specs/handshake.yaml */
/* YNL-GEN uapi header */

#ifndef _UAPI_LINUX_HANDSHAKE_H
#define _UAPI_LINUX_HANDSHAKE_H

#define HANDSHAKE_FAMILY_NAME		"handshake"
#define HANDSHAKE_FAMILY_VERSION	1

enum {
	HANDSHAKE_HANDLER_CLASS_NONE,
	HANDSHAKE_HANDLER_CLASS_TLSHD,
};

enum {
	HANDSHAKE_MSG_TYPE_UNSPEC,
	HANDSHAKE_MSG_TYPE_CLIENTHELLO,
	HANDSHAKE_MSG_TYPE_SERVERHELLO,
};

enum {
	HANDSHAKE_AUTH_UNSPEC,
	HANDSHAKE_AUTH_UNAUTH,
	HANDSHAKE_AUTH_X509,
	HANDSHAKE_AUTH_PSK,
};

enum {
	HANDSHAKE_A_ACCEPT_STATUS = 1,
	HANDSHAKE_A_ACCEPT_SOCKFD,
	HANDSHAKE_A_ACCEPT_HANDLER_CLASS,
	HANDSHAKE_A_ACCEPT_MESSAGE_TYPE,
	HANDSHAKE_A_ACCEPT_AUTH,
	HANDSHAKE_A_ACCEPT_GNUTLS_PRIORITIES,
	HANDSHAKE_A_ACCEPT_MY_PEERID,
	HANDSHAKE_A_ACCEPT_MY_PRIVKEY,

	__HANDSHAKE_A_ACCEPT_MAX,
	HANDSHAKE_A_ACCEPT_MAX = (__HANDSHAKE_A_ACCEPT_MAX - 1)
};

enum {
	HANDSHAKE_A_DONE_STATUS = 1,
	HANDSHAKE_A_DONE_SOCKFD,
	HANDSHAKE_A_DONE_REMOTE_PEERID,

	__HANDSHAKE_A_DONE_MAX,
	HANDSHAKE_A_DONE_MAX = (__HANDSHAKE_A_DONE_MAX - 1)
};

enum {
	HANDSHAKE_CMD_READY = 1,
	HANDSHAKE_CMD_ACCEPT,
	HANDSHAKE_CMD_DONE,

	__HANDSHAKE_CMD_MAX,
	HANDSHAKE_CMD_MAX = (__HANDSHAKE_CMD_MAX - 1)
};

#define HANDSHAKE_MCGRP_NONE	"none"
#define HANDSHAKE_MCGRP_TLSHD	"tlshd"

#endif /* _UAPI_LINUX_HANDSHAKE_H */
