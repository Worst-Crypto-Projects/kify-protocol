// Copywrite 2019 The Kegcoin gold devs (remove this and i will consume you)
#include <kify.h> // Config File
#include <algorithm>
#include <numeric>
#include <Common/ShuffleGenerator.h>
#include <Common/Math.h>
#include <Common/MemoryInputStream.h>
#include <CryptoNoteCore/BlockchainCache.h>
#include <CryptoNoteCore/BlockchainStorage.h>
#include <CryptoNoteCore/Currency.cpp>
#include <CryptoNoteCore/Core.cpp>
#include <set>
#include <P2p/Peerlist.cpp>
#include <unordered_set>
#include <bits/stdc++.h>

using namespace std; 
  
namespace CryptoNote {
 
/*structing the trie*/
 struct Trie { 
     string key; 
     int cnt; 
     unordered_map<char, Trie*> map; 
 }; 
  
 /* Function to return a new Trie node */
 Trie* getNewTrieNode() 
 { 
     Trie* node = new Trie; 
     node->cnt = 0; 
     return node; 
 } 
  
 /* function to insert a string */
 void insert(Trie*& root, string& str) 
 { 
     // start from root node 
     Trie* temp = root; 
   
     for (int i = 0; i < str.length(); i++) { 
   
         char x = str[i]; 
   
         /*a new node if path doesn't exists*/
         if (temp->map.find(x) == temp->map.end()) 
             temp->map[x] = getNewTrieNode(); 
   
         // go to next node 
         temp = temp->map[x]; 
     }  
   
     // store key and its count in leaf nodes 
     temp->key = str; 
     temp->cnt += 1; 
 } 
  
 /* function for preorder traversal */
 bool preorder(Trie* temp, int& maxcnt, string& key) 
 { 
     if (temp == NULL) 
         return false; 
   
     for (auto it : temp->map) { 
   
         /*leaf node will have non-zero count*/
         if (maxcnt < it.second->cnt) { 
             key = it.second->key; 
             maxcnt = it.second->cnt; 
         } 
   
         // recurse for current node children 
         preorder(it.second, maxcnt, key); 
     }  
 }  
   
 void mostFrequentHash(string arr[], int n) 
 { 
     // Insert all hashes in a Trie 
     Trie* root = getNewTrieNode(); 
     for (int i = 0; i < n; i++) 
         insert(root, arr[i]); 
   
     // Do preorder traversal to find the 
     // most frequent hash 
     string key; 
     int cnt = 0; 
     preorder(root, cnt, key); 
     return key; // Returns most common hash (key)
} 

 str Kify::netBlockHash(uint64_t height) {
  if(height== 0) {
   return GENESIS_COINBASE_TX_HEX[]; // Genesis block is undisputable - allways
  }else {
  /* What this does:
  Get peerlist and parse into an array
  get block hash of every peer
  find the hash that occours the most
  return hash
  */
   size_t peerCount = Peerlist::count();
   std::vector peerlistVector == Peerlist::Peerlist(std::vector<peerlistvector> &peers, size_t peerCount)
   int peerList[PeerList::count()];
   std::copy(peerListVector.begin(), peerListVector.end(), peerList);
 
   for (int i: peerList) {
         std::cout << i << ' ';
     }
   // Get blockhashes
   i =0;
   while (i < peerCount){
    endpoint = "http:/" + peerList[i] + ":" + RPC_DEFAULT_PORT + "/json_rpc";
    int hashs[PeerList::count()]
    hash[i] = getBlockHash(peerList[i], height); // Seprate function to keep this one clean
    i++;
   }
   // Find most common hash
   int n = sizeof(hashs) / sizeof(hashs[0]); 
   string validHash = mostFrequentHash(hashs, n); // Again, seprate function to keep this one clean
  return validHash;
  }
 }
 bool Kify::verifyNewChain(str newLastBlockHash, uint64_t lastHeight) {
  netBlockHash = getNetBlockHash(lastHeight);
  if (netBlockHash == newLastBlockHash){
   return True;
  }else {
   return False
  }
 }
}
