/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2206 from the
 * contents of LibOgg.xs. Do not edit this file, edit LibOgg.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "LibOgg.xs"
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include<stdio.h>
#include <ogg/ogg.h>

typedef PerlIO *        OutputStream;
typedef PerlIO *        InputStream;

#define OGG_BUF_SIZE 4096

#line 25 "LibOgg.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
            Perl_croak(aTHX_ "Usage: %s::%s(%s)", hvname, gvname, params);
        else
            Perl_croak(aTHX_ "Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
        Perl_croak(aTHX_ "Usage: CODE(0x%"UVxf")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#ifdef PERL_IMPLICIT_CONTEXT
#define croak_xs_usage(a,b)	S_croak_xs_usage(aTHX_ a,b)
#else
#define croak_xs_usage		S_croak_xs_usage
#endif

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#line 77 "LibOgg.c"

XS(XS_Ogg__LibOgg_make_ogg_packet); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_make_ogg_packet)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
#line 46 "LibOgg.xs"
    ogg_packet *memory;
#line 94 "LibOgg.c"
#line 48 "LibOgg.xs"
    New(0, memory, 1, ogg_packet);  // it always satisfies with what we have asked
    XPUSHs(sv_2mortal(newSViv(PTR2IV(memory))));  // since i am using sv_2mortal, i don't have to worry about leaks
#line 98 "LibOgg.c"
	PUTBACK;
	return;
    }
}


XS(XS_Ogg__LibOgg_make_ogg_stream_state); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_make_ogg_stream_state)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
#line 65 "LibOgg.xs"
    ogg_stream_state *memory;
#line 120 "LibOgg.c"
#line 67 "LibOgg.xs"
    New(0, memory, 1, ogg_stream_state);
    XPUSHs(sv_2mortal(newSViv(PTR2IV(memory))));
#line 124 "LibOgg.c"
	PUTBACK;
	return;
    }
}


XS(XS_Ogg__LibOgg_make_ogg_page); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_make_ogg_page)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
#line 85 "LibOgg.xs"
    ogg_page *memory;
#line 146 "LibOgg.c"
#line 87 "LibOgg.xs"
    New(0, memory, 1, ogg_page);
    XPUSHs(sv_2mortal(newSViv(PTR2IV(memory))));
#line 150 "LibOgg.c"
	PUTBACK;
	return;
    }
}


XS(XS_Ogg__LibOgg_make_ogg_sync_state); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_make_ogg_sync_state)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
#line 105 "LibOgg.xs"
    ogg_sync_state *memory;
#line 172 "LibOgg.c"
#line 107 "LibOgg.xs"
    New(0, memory, 1, ogg_sync_state);
    XPUSHs(sv_2mortal(newSViv(PTR2IV(memory))));
#line 176 "LibOgg.c"
	PUTBACK;
	return;
    }
}


XS(XS_Ogg__LibOgg_ogg_stream_init); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_init)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "os, serialno");
    {
	int	os = (int)SvIV(ST(0));
	int	serialno = (int)SvIV(ST(1));
#line 136 "LibOgg.xs"
    ogg_stream_state *_os;
#line 198 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 138 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    RETVAL = ogg_stream_init(_os, serialno);
#line 204 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_read_page); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_read_page)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "stream, oy, og");
    {
	InputStream	stream = IoIFP(sv_2io(ST(0)));
	int	oy = (int)SvIV(ST(1));
	int	og = (int)SvIV(ST(2));
#line 175 "LibOgg.xs"
     // search for stdio layers
     FILE *fp = PerlIO_findFILE(stream);
     ogg_sync_state *_oy;
     ogg_page *_og;
     size_t bytes;
     int ret;
     char *buffer;
#line 233 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 183 "LibOgg.xs"
    // check whether it is a valid file handler
    if (fp == (FILE*) 0 || fileno(fp) <= 0) {	
      Perl_croak(aTHX_ "Expected Open FILE HANDLER");
    }
    _oy = INT2PTR(ogg_sync_state *, oy);
    _og = INT2PTR(ogg_page *, og);   
    while(ogg_sync_pageout(_oy, _og) != 1) {
      buffer = ogg_sync_buffer(_oy, OGG_BUF_SIZE);
      bytes = fread(buffer, 1, OGG_BUF_SIZE, fp);
      if (bytes == 0) {
        XSRETURN_UNDEF;
      }
      ret = ogg_sync_wrote(_oy, bytes);
    }
    RETVAL = ret;
#line 252 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_page_bos); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_bos)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 219 "LibOgg.xs"
    ogg_page *_og;
#line 273 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 221 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_page_bos(_og);
#line 279 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_page_eos); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_eos)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 243 "LibOgg.xs"
    ogg_page *_og;
#line 300 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 245 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_page_eos(_og);
#line 306 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_page_checksum_set); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_checksum_set)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 271 "LibOgg.xs"
    ogg_page *_og;
#line 327 "LibOgg.c"
#line 273 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    ogg_page_checksum_set(_og);
#line 331 "LibOgg.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Ogg__LibOgg_ogg_page_continued); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_continued)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 293 "LibOgg.xs"
    ogg_page *_og;
#line 351 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 295 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_page_continued(_og);
#line 357 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_page_granulepos); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_granulepos)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 316 "LibOgg.xs"
    ogg_page *_og;
#line 378 "LibOgg.c"
	ogg_int64_t	RETVAL;
	dXSTARG;
#line 318 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_page_granulepos(_og);
#line 384 "LibOgg.c"
	XSprePUSH; PUSHn((NV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_page_packets); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_packets)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 345 "LibOgg.xs"
    ogg_page *_og;
#line 405 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 347 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_page_packets(_og);
#line 411 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_page_pageno); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_pageno)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 368 "LibOgg.xs"
    ogg_page *_og;
#line 432 "LibOgg.c"
	long	RETVAL;
	dXSTARG;
#line 370 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_page_pageno(_og);
#line 438 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_page_serialno); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_serialno)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 393 "LibOgg.xs"
    ogg_page *_og;
    int n = 0;
#line 460 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 396 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    n = ogg_page_serialno(_og);
    RETVAL = n;
#line 467 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_clear); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_clear)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "os");
    {
	int	os = (int)SvIV(ST(0));
#line 420 "LibOgg.xs"
    ogg_stream_state *_os;
#line 488 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 422 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    RETVAL = ogg_stream_clear(_os);
#line 494 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_reset); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_reset)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "os");
    {
	int	os = (int)SvIV(ST(0));
#line 444 "LibOgg.xs"
    ogg_stream_state *_os;
#line 515 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 446 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    RETVAL = ogg_stream_reset(_os);
#line 521 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_reset_serialno); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_reset_serialno)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "os, slno");
    {
	int	os = (int)SvIV(ST(0));
	int	slno = (int)SvIV(ST(1));
#line 471 "LibOgg.xs"
    ogg_stream_state *_os;
#line 543 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 473 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    RETVAL = ogg_stream_reset_serialno(_os, slno);
#line 549 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_destroy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_destroy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "os");
    {
	int	os = (int)SvIV(ST(0));
#line 495 "LibOgg.xs"
    ogg_stream_state *_os;
#line 570 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 497 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    RETVAL = ogg_stream_destroy(_os);
#line 576 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_check); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_check)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "os");
    {
	int	os = (int)SvIV(ST(0));
#line 520 "LibOgg.xs"
    ogg_stream_state *_os;
#line 597 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 522 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    RETVAL = ogg_stream_check(_os);
#line 603 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_page_version); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_page_version)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "og");
    {
	int	og = (int)SvIV(ST(0));
#line 545 "LibOgg.xs"
    ogg_page *_og;
#line 624 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 547 "LibOgg.xs"
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_page_version(_og);
#line 630 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_packet_clear); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_packet_clear)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "op");
    {
	int	op = (int)SvIV(ST(0));
#line 569 "LibOgg.xs"
    ogg_packet *_op;
#line 651 "LibOgg.c"
#line 571 "LibOgg.xs"
    _op = INT2PTR(ogg_packet *, op);
#line 654 "LibOgg.c"
    }
    XSRETURN_EMPTY;
}


XS(XS_Ogg__LibOgg_ogg_stream_packetin); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_packetin)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "os, op");
    {
	int	os = (int)SvIV(ST(0));
	int	op = (int)SvIV(ST(1));
#line 600 "LibOgg.xs"
    ogg_stream_state *_os;
    ogg_packet *_op;
#line 676 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 603 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    _op = INT2PTR(ogg_packet *, op);
    RETVAL = ogg_stream_packetin(_os, _op);
#line 683 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_pageout); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_pageout)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "os, og");
    {
	int	os = (int)SvIV(ST(0));
	int	og = (int)SvIV(ST(1));
#line 629 "LibOgg.xs"
    ogg_stream_state *_os;
    ogg_page *_og;
#line 706 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 632 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_stream_pageout(_os, _og);
#line 713 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_flush); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_flush)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "os, og");
    {
	int	os = (int)SvIV(ST(0));
	int	og = (int)SvIV(ST(1));
#line 659 "LibOgg.xs"
    ogg_stream_state *_os;
    ogg_page *_og;
#line 736 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 662 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_stream_flush(_os, _og);
#line 743 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_sync_init); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_init)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "oy");
    {
	int	oy = (int)SvIV(ST(0));
#line 692 "LibOgg.xs"
    ogg_sync_state *_oy;
#line 764 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 694 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);    
    RETVAL = ogg_sync_init(_oy);
#line 770 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_sync_clear); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_clear)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "oy");
    {
	int	oy = (int)SvIV(ST(0));
#line 717 "LibOgg.xs"
    ogg_sync_state *_oy;
#line 791 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 719 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);
    RETVAL = ogg_sync_clear(_oy);
#line 797 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_sync_reset); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_reset)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "oy");
    {
	int	oy = (int)SvIV(ST(0));
#line 741 "LibOgg.xs"
    ogg_sync_state *_oy;
#line 818 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 743 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);
    RETVAL = ogg_sync_reset(_oy);
#line 824 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_sync_destroy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_destroy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "oy");
    {
	int	oy = (int)SvIV(ST(0));
#line 765 "LibOgg.xs"
    ogg_sync_state *_oy;
#line 845 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 767 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);
    RETVAL = ogg_sync_destroy(_oy);
#line 851 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_sync_check); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_check)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "oy");
    {
	int	oy = (int)SvIV(ST(0));
#line 790 "LibOgg.xs"
    ogg_sync_state *_oy;
#line 872 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 792 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);
    RETVAL = ogg_sync_check(_oy);
#line 878 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_sync_buffer); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_buffer)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "oy, size");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
	int	oy = (int)SvIV(ST(0));
	int	size = (int)SvIV(ST(1));
#line 816 "LibOgg.xs"
    ogg_sync_state *_oy;
    char *buffer;
#line 903 "LibOgg.c"
#line 819 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);
    if((buffer = ogg_sync_buffer(_oy, size)) != NULL) {
      XPUSHs(sv_2mortal(newSViv(PTR2IV(buffer))));
    } else {
      XSRETURN_UNDEF;
    }
#line 911 "LibOgg.c"
	PUTBACK;
	return;
    }
}


XS(XS_Ogg__LibOgg_ogg_sync_wrote); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_wrote)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "oy, bytes");
    {
	int	oy = (int)SvIV(ST(0));
	long	bytes = (long)SvIV(ST(1));
#line 848 "LibOgg.xs"
    ogg_sync_state *_oy;
#line 933 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 850 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);
    RETVAL = ogg_sync_wrote(_oy, bytes);
#line 939 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_sync_pageseek); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_pageseek)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "oy, og");
    {
	int	oy = (int)SvIV(ST(0));
	int	og = (int)SvIV(ST(1));
#line 877 "LibOgg.xs"
    ogg_sync_state *_oy;
    ogg_page *_og;
#line 962 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 880 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_sync_pageseek(_oy, _og);
#line 969 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_sync_pageout); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_sync_pageout)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "oy, og");
    {
	int	oy = (int)SvIV(ST(0));
	int	og = (int)SvIV(ST(1));
#line 909 "LibOgg.xs"
    ogg_sync_state *_oy;
    ogg_page *_og;
#line 992 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 912 "LibOgg.xs"
    _oy = INT2PTR(ogg_sync_state *, oy);
    _og = INT2PTR(ogg_page *, og);
    RETVAL = ogg_sync_pageout(_oy, _og); 
#line 999 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_pagein); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_pagein)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "os, og");
    {
	int	os = (int)SvIV(ST(0));
	int	og = (int)SvIV(ST(1));
#line 939 "LibOgg.xs"
    ogg_stream_state *_os;
    ogg_page *_og;
#line 1022 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 942 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    _og = INT2PTR(ogg_page *, og); 
    RETVAL = ogg_stream_pagein(_os, _og);
#line 1029 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_packetout); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_packetout)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "os, op");
    {
	int	os = (int)SvIV(ST(0));
	int	op = (int)SvIV(ST(1));
#line 971 "LibOgg.xs"
    ogg_stream_state *_os;
    ogg_packet *_op;
#line 1052 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 974 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    _op = INT2PTR(ogg_packet *, op);
    RETVAL = ogg_stream_packetout(_os, _op);
#line 1059 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Ogg__LibOgg_ogg_stream_packetpeek); /* prototype to pass -Wmissing-prototypes */
XS(XS_Ogg__LibOgg_ogg_stream_packetpeek)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "os, op");
    {
	int	os = (int)SvIV(ST(0));
	int	op = (int)SvIV(ST(1));
#line 1001 "LibOgg.xs"
    ogg_stream_state *_os;
    ogg_packet *_op;
#line 1082 "LibOgg.c"
	int	RETVAL;
	dXSTARG;
#line 1004 "LibOgg.xs"
    _os = INT2PTR(ogg_stream_state *, os);
    _op = INT2PTR(ogg_packet *, op);
    RETVAL = ogg_stream_packetpeek(_os, _op);
#line 1089 "LibOgg.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Ogg__LibOgg); /* prototype to pass -Wmissing-prototypes */
XS(boot_Ogg__LibOgg)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
    XS_VERSION_BOOTCHECK ;

        newXS("Ogg::LibOgg::make_ogg_packet", XS_Ogg__LibOgg_make_ogg_packet, file);
        newXS("Ogg::LibOgg::make_ogg_stream_state", XS_Ogg__LibOgg_make_ogg_stream_state, file);
        newXS("Ogg::LibOgg::make_ogg_page", XS_Ogg__LibOgg_make_ogg_page, file);
        newXS("Ogg::LibOgg::make_ogg_sync_state", XS_Ogg__LibOgg_make_ogg_sync_state, file);
        newXS("Ogg::LibOgg::ogg_stream_init", XS_Ogg__LibOgg_ogg_stream_init, file);
        newXS("Ogg::LibOgg::ogg_read_page", XS_Ogg__LibOgg_ogg_read_page, file);
        newXS("Ogg::LibOgg::ogg_page_bos", XS_Ogg__LibOgg_ogg_page_bos, file);
        newXS("Ogg::LibOgg::ogg_page_eos", XS_Ogg__LibOgg_ogg_page_eos, file);
        newXS("Ogg::LibOgg::ogg_page_checksum_set", XS_Ogg__LibOgg_ogg_page_checksum_set, file);
        newXS("Ogg::LibOgg::ogg_page_continued", XS_Ogg__LibOgg_ogg_page_continued, file);
        newXS("Ogg::LibOgg::ogg_page_granulepos", XS_Ogg__LibOgg_ogg_page_granulepos, file);
        newXS("Ogg::LibOgg::ogg_page_packets", XS_Ogg__LibOgg_ogg_page_packets, file);
        newXS("Ogg::LibOgg::ogg_page_pageno", XS_Ogg__LibOgg_ogg_page_pageno, file);
        newXS("Ogg::LibOgg::ogg_page_serialno", XS_Ogg__LibOgg_ogg_page_serialno, file);
        newXS("Ogg::LibOgg::ogg_stream_clear", XS_Ogg__LibOgg_ogg_stream_clear, file);
        newXS("Ogg::LibOgg::ogg_stream_reset", XS_Ogg__LibOgg_ogg_stream_reset, file);
        newXS("Ogg::LibOgg::ogg_stream_reset_serialno", XS_Ogg__LibOgg_ogg_stream_reset_serialno, file);
        newXS("Ogg::LibOgg::ogg_stream_destroy", XS_Ogg__LibOgg_ogg_stream_destroy, file);
        newXS("Ogg::LibOgg::ogg_stream_check", XS_Ogg__LibOgg_ogg_stream_check, file);
        newXS("Ogg::LibOgg::ogg_page_version", XS_Ogg__LibOgg_ogg_page_version, file);
        newXS("Ogg::LibOgg::ogg_packet_clear", XS_Ogg__LibOgg_ogg_packet_clear, file);
        newXS("Ogg::LibOgg::ogg_stream_packetin", XS_Ogg__LibOgg_ogg_stream_packetin, file);
        newXS("Ogg::LibOgg::ogg_stream_pageout", XS_Ogg__LibOgg_ogg_stream_pageout, file);
        newXS("Ogg::LibOgg::ogg_stream_flush", XS_Ogg__LibOgg_ogg_stream_flush, file);
        newXS("Ogg::LibOgg::ogg_sync_init", XS_Ogg__LibOgg_ogg_sync_init, file);
        newXS("Ogg::LibOgg::ogg_sync_clear", XS_Ogg__LibOgg_ogg_sync_clear, file);
        newXS("Ogg::LibOgg::ogg_sync_reset", XS_Ogg__LibOgg_ogg_sync_reset, file);
        newXS("Ogg::LibOgg::ogg_sync_destroy", XS_Ogg__LibOgg_ogg_sync_destroy, file);
        newXS("Ogg::LibOgg::ogg_sync_check", XS_Ogg__LibOgg_ogg_sync_check, file);
        newXS("Ogg::LibOgg::ogg_sync_buffer", XS_Ogg__LibOgg_ogg_sync_buffer, file);
        newXS("Ogg::LibOgg::ogg_sync_wrote", XS_Ogg__LibOgg_ogg_sync_wrote, file);
        newXS("Ogg::LibOgg::ogg_sync_pageseek", XS_Ogg__LibOgg_ogg_sync_pageseek, file);
        newXS("Ogg::LibOgg::ogg_sync_pageout", XS_Ogg__LibOgg_ogg_sync_pageout, file);
        newXS("Ogg::LibOgg::ogg_stream_pagein", XS_Ogg__LibOgg_ogg_stream_pagein, file);
        newXS("Ogg::LibOgg::ogg_stream_packetout", XS_Ogg__LibOgg_ogg_stream_packetout, file);
        newXS("Ogg::LibOgg::ogg_stream_packetpeek", XS_Ogg__LibOgg_ogg_stream_packetpeek, file);
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

