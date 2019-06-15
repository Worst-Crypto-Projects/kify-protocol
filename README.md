# kify-protocol
The kify protocol prevents 51 attacks by checking new blocks have not modifyed the previous block (and thus others before). it also means transactions require only 2 transactions to be **Permanantly** ireverable (in keg thats 10 mins) rather than most coins 1 hour (ish) worth of blocks.


- [x] get peerlist,
- [ ] Get blockhash from peers,
- [x] find the most common hash from peers,
- [x] see if the new proposed chain has changed last block hash (and thus changed previous blocks),
- [ ] Regect if the new proposed chain has changed last block hash (30% compleate) 
- [x] ban peer that is proposing chain if it is found to have modified previous blocks (diffrent levels (soft/ temp/ perm),
- [ ] accept block if it is correct,
- [ ] run this check whenether a (NEW - not during syncing) block is sent to you.
--[ ] TX spam attack prevention:
- [ ] Limit TXs/person/day (or block?)
## How to implement?
This code snippet currently only works with turtlecoin forks (cryptoNote based) but i may add support for other coins in the future. Just replace your core.cpp, currency.cpp,AddBlockErrors.h and AddBlockErrorCondition.h with the ones provided and add ban.cpp and ban.h to your CryptoNoteCore folder,the create src/Kify and add kify.c and kify.h then replace ~/coin/CMakeLists.txt with the provided one. Or you can fork kegcoin old directly and have all the latest updates only a pr away.

_I Am Working on implementing this into kegcoins new code (loki based (which is monero based)) Based which may break compatailty with trtl forks. if yu wish to add this i will make a new repo for trtl forks with a version of kify that is compatable with turtlecoin forks._ 
