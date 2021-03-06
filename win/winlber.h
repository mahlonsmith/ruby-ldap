/* -*- C -*-
 * $Id$
 * Copyright (C) 2001 Takaaki Tateishi <ttate@kt.jaist.ac.jp>
 * References: MSDN Library, OpenLDAP, Cygwin
 */

#ifndef WINLBER_H
#define WINLBER_H

#include <windows.h>

typedef struct berval {
  ULONG bv_len;
  PCHAR bv_val;
} LDAP_BERVAL, *PLDAP_BERVAL, BERVAL, *PBERVAL;

typedef struct berElement {
  PCHAR opaque;
} BerElement;

#endif /* WINLBER_H */
