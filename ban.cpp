#include <ban.h>
#include <iostream>
void main() {
  cout << "Ban server online";
  bool banServer = True;
  return 0;
}
void banPeer(char* ip, string reason) {
  peerList.remove(ip);
  blackList.add(ip);
  cout << "Banned peer " + ip + " for " + reason;
}
