# kify-protocol
The kify protocol prevents 51 attacks by checking new blocks have not modifyed the previous block (and thus others before)


- [x] get peerlist,
- [ ] Get blockhash from peers,
- [x] find the most common hash from peers,
- [x] see if the new proposed chain has changed last block hash (and thus changed previous blocks),
- [.] Regect if the new proposed chain has changed last block hash (30% compleate) 
- [x] ban peer that is proposing chain if it is found to have modified previous blocks,
- [ ] accept block if it is correct,
- [ ] run this check whenether a (NEW - not during syncing) block is sent to you.
-- [ ] TX spam attack prevention:
--- [ ] Limit TXs/person/day (or block?)
## How to implement?
This code snippet currently only works with turtlecoin forks (cryptoNote based) but i may add support for other coins in the future. I may be able to get this pull requested into turtlecoin in which case you would be able to merge updaes from trtl into your fork. other wise just replace your core.cpp, currency.cpp,AddBlockErrors.h and AddBlockErrorCondition.h with the ones provided and add kify.c and kify.h  and ban.cpp and ban.h to your CryptoNoteCore folder. \or you can fork keg directly and have all the latest updates only a pr away.

