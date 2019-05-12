// Copywrite 2019 The Kegcoin Gold devs (rmove this and ill consume you)

#define required_nodes_percent 50 // How much of the netnodes need to agree with the node for it to acept the  chain (dont change)
#define required_hash_percent 50 // How much of the nethash a chain fork requires (dont change)
#define max_peer_polls peerCount() // Max amount of peers to poll forblock height (set to peerCount() to poll every conected peer)
#define poll_timeout 100 // Time (in secconds) before we drop the conection to peer when reciving no data
