/*Representing Keys for Use in Cryptography Algorithms

Problem:
	You want to keep an internal representation of a symmetric key. You may want to save the key
	to a disk, pass it over a network.
*/

Solution #1 ( C ):
Simply keep the key as an ordered array of bytes.
unsigned char* key[KEYLEN_BYTES];
//when dynamically allocated
unsigned char *key = (unsigned char *) malloc(KEYLEN_BYTES);
// when you are done using a key, you should delete it securely to prevent local attackers from recovering
// it from memory.


Solution #2 ( C++ ):
Keep the key as a bitset.
constexpr std::bitset<KEYLEN_BYTES> b1;
b1.set(position_t(1),true); assert(b1 == 0b0010);
b1.reset(position_t(1)); assert(b1 == 0)
b1.flip(); assert(b1 == 0b1111);
