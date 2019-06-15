#include <ban.h>
#include <iostream>
void main() {
  std::cout << "Ban server online";
  bool banServer = True;
  return 0;
}
bool banPeer(char* ip, string reason) {
  if (ip in getPeerList()) {
    peerList.remove(ip);
    blackList.add(ip);
    banList = banList + ip + ",";
    std::cout << "Banned peer " + ip + " for " + reason;
    return true;
  }elif (ip in banList) {
    std::cout << "ERROR: peer allready banned!";
    return false;
  }elif (banServer !== True) {
    std::cout << "ERROR: Not initilised";
  }else {
    std::cout << "ERROR: cannot ban peer, not in peerlist!";
    return false;
  }
}
