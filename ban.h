
const string types = { //Types of bans
"Permanant", // P
"Temporary,  // T
"Soft",      // S
}
const uint64_t codes
  "0", // P
  "1", // T
  "2", // S
}
string getType(code) {
  if (code !in codes) {
    return "invalid Ban code";
  }elif (code == 0) {
    return "P";
  }elif (code == 1) {
    return "T";
  }elif (code == 2) {
    return "S";
  }else
    std::cout << "wtf has happened??"; // i THINK this should never happen (unless you add ban types and foget to add a if statment) becuase the first if statment should catch nubers that are not in the ban type list
   exit();
  }
}
