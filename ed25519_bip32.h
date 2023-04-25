/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>



extern "C" {

/// from_seed_c derives a new extended secret key from a seed.
/// note that the caller must call derive_free_c() to free the returned memory as ownership is
/// transferred to the caller.
/// derive_c does the same thing as derive_key above, but is intended for use over the CFFI.
/// it adds error handling in order to be friendlier to the FFI caller: in case of an error, it
/// prints the error and returns a null pointer.
/// note that the caller must call derive_free_c() to free the returned memory as ownership is
/// transferred to the caller.
uint8_t *derive_c(const uint8_t *seed, size_t seedlen, const uint8_t *path, size_t pathlen);

/// free the memory allocated and returned by the derive functions by transferring ownership back to
/// Rust. must be called on each pointer returned by the functions precisely once to ensure safety.
void derive_free_c(uint8_t *ptr);

} // extern "C"
