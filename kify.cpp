 // Copywrite 2019 The Kegcoin gold devs (remove this and i will consume you)
 #include <kify.h> // Config File
 #include <algorithm>

#include <numeric>

#include <Common/ShuffleGenerator.h>
#include <Common/Math.h>
#include <Common/MemoryInputStream.h>

#include <CryptoNoteCore/BlockchainCache.h>
#include <CryptoNoteCore/BlockchainStorage.h>
#include <CryptoNoteCore/BlockchainUtils.h>
#include <CryptoNoteCore/Core.h>
#include <CryptoNoteCore/CoreErrors.h>
#include <CryptoNoteCore/CryptoNoteFormatUtils.h>
#include <CryptoNoteCore/CryptoNoteTools.h>
#include <CryptoNoteCore/ITimeProvider.h>
#include <CryptoNoteCore/MemoryBlockchainStorage.h>
#include <CryptoNoteCore/Mixins.h>
#include <CryptoNoteCore/TransactionApi.h>
#include <CryptoNoteCore/TransactionExtra.h>
#include <CryptoNoteCore/TransactionPool.h>
#include <CryptoNoteCore/TransactionPoolCleaner.h>
#include <CryptoNoteCore/UpgradeManager.h>

#include <CryptoNoteProtocol/CryptoNoteProtocolHandlerCommon.h>

#include <set>

#include <System/Timer.h>

#include <Utilities/FormatTools.h>
#include <Utilities/LicenseCanary.h>

#include <unordered_set>

#include <WalletTypes.h>

namespace CryptoNote {
 str Kify::netBlockHash(uint64_t height) {
 if(height== 0) {
  return GENESIS_COINBASE_TX_HEX[]; // Genesis block is undisputable - allways
 }else {
 /* What this does:
 Get peerlistand parse into an array
 get block hash of every peer
 find the hash that occours <= 50%
 return hash
 */
  size_t peercount = Peerlist::count();
  std::vector peerlistVector == Peerlist::Peerlist(std::vector<peerlistvector> &peers, size_t peercount)
  int peerList[PeerList::count()];
  std::copy(peerListVector.begin(), peerListVector.end(), peerList);

  for (int i: peerList) {
        std::cout << i << ' ';
    }
 }
 bool Kify::verifyNewChain(str newLastBlockHash, uint64_t lastHeight) {
  nethashBlock = getNetBlockHash(lastHeight);
  if (netBlockHash == newLastBlockHash){
   return True;
  }else {
   return False
  }
 }
}
