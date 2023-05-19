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
  float CpuUtilization();                  // See src/process.cpp
  string Ram();                       // See src/process.cpp
  long int UpTime();                       // See src/process.cpp
  bool operator<(Process const& a) const;  // See src/process.cpp

  Process(int _pid, string _user, string _ram, long _upTime, string _command, float _cpu) {
      pid = _pid;
      user = _user;
      ram = _ram;
      upTime = _upTime;
      command = _command;
      cpuUtilization = _cpu;
  }
  
  // Declare any necessary private members
 private:
    int pid{0};
    string user{"Error"};
    string command{"Error"};
    float cpuUtilization{0.0};
    string ram{"Error"};
    long int upTime{0};
    
};


#endif