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
    std::cout << "Banned peer " + ip + " for " + reason;
    return true;
  } else {
    std::cout << "ERROR: cannot ban peer, not in peerlist!";
    return false;
  }
}
