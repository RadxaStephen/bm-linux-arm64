#ifndef __CE_CIPHER_H__
#define __CE_CIPHER_H__

int unregister_all_alg(int map[]);
int register_all_alg(int map[]);
void ce_cipher_handle_request(struct ce_inst *inst,
			      struct crypto_async_request *req);

#endif
