# kify-protocol
The kify protocol prevents 51 attacks by checking new blocks have not modifyed the previous block (and thus others before)


- [x] get peerlist,
- [ ] Get blockhash from peers,
- [x] find the most common hash from peers,
- [x] see if the new proposed chain has changed last block hash (and thus changed previous blocks),
- [ ] ban peer that is proposing chain if it is found to have modified previous blocks,
- [ ] accept block if it is correct,
- [ ] run this check whenether a (NEW - not during syncing) block is sent to you.


