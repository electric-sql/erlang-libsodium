// -*- mode: c; tab-width: 8; indent-tabs-mode: 1; st-rulers: [70] -*-
// vim: ts=8 sw=8 ft=c noet

#include "libsodium_api_crypto_generichash_blake2b.h"

static void	LS_API_EXEC(crypto_generichash_blake2b, bytes_min);
static void	LS_API_EXEC(crypto_generichash_blake2b, bytes_max);
static void	LS_API_EXEC(crypto_generichash_blake2b, bytes);
static void	LS_API_EXEC(crypto_generichash_blake2b, keybytes_min);
static void	LS_API_EXEC(crypto_generichash_blake2b, keybytes_max);
static void	LS_API_EXEC(crypto_generichash_blake2b, keybytes);
static void	LS_API_EXEC(crypto_generichash_blake2b, saltbytes);
static void	LS_API_EXEC(crypto_generichash_blake2b, personalbytes);
static int	LS_API_INIT(crypto_generichash_blake2b, crypto_generichash_blake2b);
static void	LS_API_EXEC(crypto_generichash_blake2b, crypto_generichash_blake2b);
static int	LS_API_INIT(crypto_generichash_blake2b, init);
static void	LS_API_EXEC(crypto_generichash_blake2b, init);
static int	LS_API_INIT(crypto_generichash_blake2b, update);
static void	LS_API_EXEC(crypto_generichash_blake2b, update);
static int	LS_API_INIT(crypto_generichash_blake2b, final);
static void	LS_API_EXEC(crypto_generichash_blake2b, final);

libsodium_function_t	libsodium_functions_crypto_generichash_blake2b[] = {
	LS_API_R_ARG0(crypto_generichash_blake2b, bytes_min),
	LS_API_R_ARG0(crypto_generichash_blake2b, bytes_max),
	LS_API_R_ARG0(crypto_generichash_blake2b, bytes),
	LS_API_R_ARG0(crypto_generichash_blake2b, keybytes_min),
	LS_API_R_ARG0(crypto_generichash_blake2b, keybytes_max),
	LS_API_R_ARG0(crypto_generichash_blake2b, keybytes),
	LS_API_R_ARG0(crypto_generichash_blake2b, saltbytes),
	LS_API_R_ARG0(crypto_generichash_blake2b, personalbytes),
	LS_API_R_ARGV(crypto_generichash_blake2b, crypto_generichash_blake2b, 3),
	LS_API_R_ARGV(crypto_generichash_blake2b, init, 2),
	LS_API_R_ARGV(crypto_generichash_blake2b, update, 2),
	LS_API_R_ARGV(crypto_generichash_blake2b, final, 2),
	{NULL}
};

#define LS_API_CRYPTO_GENERICHASH_BLAKE2B_STATEBYTES	((sizeof(crypto_generichash_blake2b_state) + (size_t) 63U) & ~(size_t) 63U)

/* crypto_generichash_blake2b_bytes_min/0 */

static void
LS_API_EXEC(crypto_generichash_blake2b, bytes_min)
{
	size_t bytes_min;

	bytes_min = crypto_generichash_blake2b_bytes_min();

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_UINT, (ErlDrvUInt)(bytes_min),
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_bytes_max/0 */

static void
LS_API_EXEC(crypto_generichash_blake2b, bytes_max)
{
	size_t bytes_max;

	bytes_max = crypto_generichash_blake2b_bytes_max();

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_UINT, (ErlDrvUInt)(bytes_max),
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_bytes/0 */

static void
LS_API_EXEC(crypto_generichash_blake2b, bytes)
{
	size_t bytes;

	bytes = crypto_generichash_blake2b_bytes();

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_UINT, (ErlDrvUInt)(bytes),
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_keybytes_min/0 */

static void
LS_API_EXEC(crypto_generichash_blake2b, keybytes_min)
{
	size_t keybytes_min;

	keybytes_min = crypto_generichash_blake2b_keybytes_min();

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_UINT, (ErlDrvUInt)(keybytes_min),
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_keybytes_max/0 */

static void
LS_API_EXEC(crypto_generichash_blake2b, keybytes_max)
{
	size_t keybytes_max;

	keybytes_max = crypto_generichash_blake2b_keybytes_max();

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_UINT, (ErlDrvUInt)(keybytes_max),
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_keybytes/0 */

static void
LS_API_EXEC(crypto_generichash_blake2b, keybytes)
{
	size_t keybytes;

	keybytes = crypto_generichash_blake2b_keybytes();

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_UINT, (ErlDrvUInt)(keybytes),
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_saltbytes/0 */

static void
LS_API_EXEC(crypto_generichash_blake2b, saltbytes)
{
	size_t saltbytes;

	saltbytes = crypto_generichash_blake2b_saltbytes();

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_UINT, (ErlDrvUInt)(saltbytes),
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_personalbytes/0 */

static void
LS_API_EXEC(crypto_generichash_blake2b, personalbytes)
{
	size_t personalbytes;

	personalbytes = crypto_generichash_blake2b_personalbytes();

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_UINT, (ErlDrvUInt)(personalbytes),
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_crypto_generichash_blake2b/3 */

typedef struct LS_API_F_ARGV(crypto_generichash_blake2b, crypto_generichash_blake2b) {
	size_t			outlen;
	const unsigned char	*in;
	unsigned long long	inlen;
	const unsigned char	*key;
	size_t			keylen;
} LS_API_F_ARGV_T(crypto_generichash_blake2b, crypto_generichash_blake2b);

static int
LS_API_INIT(crypto_generichash_blake2b, crypto_generichash_blake2b)
{
	LS_API_F_ARGV_T(crypto_generichash_blake2b, crypto_generichash_blake2b) *argv;
	int skip;
	int type;
	int type_length;
	size_t outlen;
	unsigned long long inlen;
	size_t keylen;
	ErlDrvSizeT x;
	void *p;

	if (ei_decode_ulong(buffer, index, (unsigned long *)&(outlen)) < 0) {
		return -1;
	}

	if (outlen > crypto_generichash_blake2b_bytes_max() || outlen < crypto_generichash_blake2b_bytes_min()) {
		return -1;
	}

	if (ei_get_type(buffer, index, &type, &type_length) < 0
			|| type != ERL_BINARY_EXT) {
		return -1;
	}

	inlen = (unsigned long long)(type_length);

	skip = *index;

	if (ei_skip_term(buffer, &skip) < 0) {
		return -1;
	}

	if (ei_get_type(buffer, &skip, &type, &type_length) < 0
			|| type != ERL_BINARY_EXT) {
		return -1;
	}

	keylen = (size_t)(type_length);

	if (keylen != 0 && (keylen > crypto_generichash_blake2b_keybytes_max() || keylen < crypto_generichash_blake2b_keybytes_min())) {
		return -1;
	}

	x = (ErlDrvSizeT)(inlen + keylen + (sizeof (LS_API_F_ARGV_T(crypto_generichash_blake2b, crypto_generichash_blake2b))));
	p = (void *)(driver_alloc(x));

	if (p == NULL) {
		return -1;
	}

	argv = (LS_API_F_ARGV_T(crypto_generichash_blake2b, crypto_generichash_blake2b) *)(p);
	argv->outlen = outlen;
	p += (sizeof (LS_API_F_ARGV_T(crypto_generichash_blake2b, crypto_generichash_blake2b)));
	argv->in = (const unsigned char *)(p);

	if (keylen == 0) {
		argv->key = NULL;
		argv->keylen = 0;
	} else {
		p += inlen;
		argv->key = (const unsigned char *)(p);
	}

	if (ei_decode_binary(buffer, index, (void *)(argv->in), (long *)&(argv->inlen)) < 0) {
		(void) driver_free(argv);
		return -1;
	}

	if (keylen > 0) {
		if (ei_decode_binary(buffer, index, (void *)(argv->key), (long *)&(argv->keylen)) < 0) {
			(void) driver_free(argv);
			return -1;
		}
	}

	request->argv = (void *)(argv);

	return 0;
}

static void
LS_API_EXEC(crypto_generichash_blake2b, crypto_generichash_blake2b)
{
	LS_API_F_ARGV_T(crypto_generichash_blake2b, crypto_generichash_blake2b) *argv;
	LS_API_READ_ARGV(crypto_generichash_blake2b, crypto_generichash_blake2b);
	unsigned char *out;

	out = (unsigned char *)(driver_alloc((ErlDrvSizeT)(argv->outlen)));

	if (out == NULL) {
		LS_FAIL_OOM(request->port->drv_port);
		return;
	}

	(void) crypto_generichash_blake2b(out, argv->outlen, argv->in, argv->inlen, argv->key, argv->keylen);

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_BUF2BINARY, (ErlDrvTermData)(out), argv->outlen,
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);

	(void) driver_free(out);
}

/* crypto_generichash_blake2b_init/2 */

typedef struct LS_API_F_ARGV(crypto_generichash_blake2b, init) {
	const unsigned char	*key;
	size_t			keylen;
	size_t			outlen;
} LS_API_F_ARGV_T(crypto_generichash_blake2b, init);

static int
LS_API_INIT(crypto_generichash_blake2b, init)
{
	LS_API_F_ARGV_T(crypto_generichash_blake2b, init) *argv;
	int skip;
	int type;
	int type_length;
	size_t keylen;
	size_t outlen;
	ErlDrvSizeT x;
	void *p;

	if (ei_get_type(buffer, index, &type, &type_length) < 0
			|| type != ERL_BINARY_EXT) {
		return -1;
	}

	keylen = (size_t)(type_length);

	if (keylen != 0 && (keylen > crypto_generichash_blake2b_keybytes_max() || keylen < crypto_generichash_blake2b_keybytes_min())) {
		return -1;
	}

	skip = *index;

	if (ei_skip_term(buffer, &skip) < 0) {
		return -1;
	}

	if (ei_decode_ulong(buffer, &skip, (unsigned long *)&(outlen)) < 0) {
		return -1;
	}

	if (outlen > crypto_generichash_blake2b_bytes_max() || outlen < crypto_generichash_blake2b_bytes_min()) {
		return -1;
	}

	x = (ErlDrvSizeT)(keylen + (sizeof (LS_API_F_ARGV_T(crypto_generichash_blake2b, init))));
	p = (void *)(driver_alloc(x));

	if (p == NULL) {
		return -1;
	}

	argv = (LS_API_F_ARGV_T(crypto_generichash_blake2b, init) *)(p);

	if (keylen == 0) {
		argv->key = NULL;
		argv->keylen = 0;
	} else {
		p += (sizeof (LS_API_F_ARGV_T(crypto_generichash_blake2b, init)));
		argv->key = (const unsigned char *)(p);
		if (ei_decode_binary(buffer, index, (void *)(argv->key), (long *)&(argv->keylen)) < 0) {
			(void) driver_free(argv);
			return -1;
		}
	}

	argv->outlen = outlen;

	request->argv = (void *)(argv);

	return 0;
}

static void
LS_API_EXEC(crypto_generichash_blake2b, init)
{
	LS_API_F_ARGV_T(crypto_generichash_blake2b, init) *argv;
	LS_API_READ_ARGV(crypto_generichash_blake2b, init);
	size_t statebytes;
	crypto_generichash_blake2b_state *state;

	statebytes = LS_API_CRYPTO_GENERICHASH_BLAKE2B_STATEBYTES;

	state = (crypto_generichash_blake2b_state *)(sodium_malloc(statebytes));

	if (state == NULL) {
		LS_FAIL_OOM(request->port->drv_port);
		return;
	}

	(void) crypto_generichash_blake2b_init(state, argv->key, argv->keylen, argv->outlen);

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_BUF2BINARY, (ErlDrvTermData)(char *)(state), statebytes,
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);

	(void) sodium_free(state);
}

/* crypto_generichash_blake2b_update/2 */

typedef struct LS_API_F_ARGV(crypto_generichash_blake2b, update) {
	crypto_generichash_blake2b_state	*state;
	const unsigned char		*in;
	unsigned long long		inlen;
} LS_API_F_ARGV_T(crypto_generichash_blake2b, update);

static int
LS_API_INIT(crypto_generichash_blake2b, update)
{
	LS_API_F_ARGV_T(crypto_generichash_blake2b, update) *argv;
	int skip;
	int type;
	int type_length;
	size_t statebytes;
	ErlDrvSizeT x;
	void *p;

	statebytes = LS_API_CRYPTO_GENERICHASH_BLAKE2B_STATEBYTES;

	if (ei_get_type(buffer, index, &type, &type_length) < 0
			|| type != ERL_BINARY_EXT
			|| type_length != statebytes) {
		return -1;
	}

	skip = *index;

	if (ei_skip_term(buffer, &skip) < 0) {
		return -1;
	}

	if (ei_get_type(buffer, &skip, &type, &type_length) < 0
			|| type != ERL_BINARY_EXT) {
		return -1;
	}

	x = (ErlDrvSizeT)(statebytes + type_length + (sizeof (LS_API_F_ARGV_T(crypto_generichash_blake2b, update))));
	p = (void *)(driver_alloc(x));

	if (p == NULL) {
		return -1;
	}

	argv = (LS_API_F_ARGV_T(crypto_generichash_blake2b, update) *)(p);
	p += (sizeof (LS_API_F_ARGV_T(crypto_generichash_blake2b, update)));
	argv->state = (crypto_generichash_blake2b_state *)(p);
	p += statebytes;
	argv->in = (const unsigned char *)(p);

	if (ei_decode_binary(buffer, index, (void *)(argv->state), NULL) < 0) {
		(void) driver_free(argv);
		return -1;
	}

	if (ei_decode_binary(buffer, index, (void *)(argv->in), (long *)&(argv->inlen)) < 0) {
		(void) driver_free(argv);
		return -1;
	}

	request->argv = (void *)(argv);

	return 0;
}

static void
LS_API_EXEC(crypto_generichash_blake2b, update)
{
	LS_API_F_ARGV_T(crypto_generichash_blake2b, update) *argv;
	LS_API_READ_ARGV(crypto_generichash_blake2b, update);
	size_t statebytes;

	statebytes = LS_API_CRYPTO_GENERICHASH_BLAKE2B_STATEBYTES;

	(void) crypto_generichash_blake2b_update(argv->state, argv->in, argv->inlen);

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_BUF2BINARY, (ErlDrvTermData)(char *)(argv->state), statebytes,
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}

/* crypto_generichash_blake2b_final/2 */

typedef struct LS_API_F_ARGV(crypto_generichash_blake2b, final) {
	crypto_generichash_blake2b_state	*state;
	size_t				outlen;
} LS_API_F_ARGV_T(crypto_generichash_blake2b, final);

static int
LS_API_INIT(crypto_generichash_blake2b, final)
{
	LS_API_F_ARGV_T(crypto_generichash_blake2b, final) *argv;
	int skip;
	int type;
	int type_length;
	size_t statebytes;
	size_t outlen;
	ErlDrvSizeT x;
	void *p;

	statebytes = LS_API_CRYPTO_GENERICHASH_BLAKE2B_STATEBYTES;

	if (ei_get_type(buffer, index, &type, &type_length) < 0
			|| type != ERL_BINARY_EXT
			|| type_length != statebytes) {
		return -1;
	}

	skip = *index;

	if (ei_skip_term(buffer, &skip) < 0) {
		return -1;
	}

	if (ei_decode_ulong(buffer, &skip, (unsigned long *)&(outlen)) < 0) {
		return -1;
	}

	if (outlen > crypto_generichash_blake2b_bytes_max() || outlen < crypto_generichash_blake2b_bytes_min()) {
		return -1;
	}

	x = (ErlDrvSizeT)(statebytes + (sizeof (LS_API_F_ARGV_T(crypto_generichash_blake2b, final))));
	p = (void *)(driver_alloc(x));

	if (p == NULL) {
		return -1;
	}

	argv = (LS_API_F_ARGV_T(crypto_generichash_blake2b, final) *)(p);
	p += (sizeof (LS_API_F_ARGV_T(crypto_generichash_blake2b, final)));
	argv->state = (crypto_generichash_blake2b_state *)(p);
	argv->outlen = outlen;

	if (ei_decode_binary(buffer, index, (void *)(argv->state), NULL) < 0) {
		(void) driver_free(argv);
		return -1;
	}

	request->argv = (void *)(argv);

	return 0;
}

static void
LS_API_EXEC(crypto_generichash_blake2b, final)
{
	LS_API_F_ARGV_T(crypto_generichash_blake2b, final) *argv;
	LS_API_READ_ARGV(crypto_generichash_blake2b, final);
	unsigned char *out;

	out = (unsigned char *)(driver_alloc((ErlDrvSizeT)(argv->outlen)));

	if (out == NULL) {
		LS_FAIL_OOM(request->port->drv_port);
		return;
	}

	(void) crypto_generichash_blake2b_final(argv->state, out, argv->outlen);

	ErlDrvTermData spec[] = {
		LS_RES_TAG(request),
		ERL_DRV_BUF2BINARY, (ErlDrvTermData)(out), argv->outlen,
		ERL_DRV_TUPLE, 2
	};

	LS_RESPOND(request, spec, __FILE__, __LINE__);
}
