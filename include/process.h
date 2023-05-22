#ifndef PROCESS_H
#define PROCESS_H

#include <string>

using std::string;
/*
Basic class for Process representation
*/
class Process {
 public:
  int Pid();                               // See src/process.cpp
  string User();                      // See src/process.cpp
  string Command();                   // See src/process.cpp
  float CpuUtilization()const;                  // See src/process.cpp
  string Ram();                       // See src/process.cpp
  long int UpTime();                       // See src/process.cpp
  bool operator<(Process const& a) const;  // See src/process.cpp

  Process(int _pid) {
      pid = _pid;
  }
  
  // Declare any necessary private members
 private:
    int pid{0};
};


#endif