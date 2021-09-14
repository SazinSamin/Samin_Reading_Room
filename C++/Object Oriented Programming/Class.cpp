#include<iostream>
using namespace std;

class Log{
        private:
                int _ErrorLevel = 0;
                int _WarningLevel = 1;
                int _AllLevel = 2;
                const char* _messages;

        public:
                int LogLevel;



        private:
                void ErrorMessage(){
                        if (LogLevel >= _ErrorLevel){
                                cout << "\nError: " << _messages << endl;
                        }
                }

                void WarningMessage(){
                        if (LogLevel >= _WarningLevel){
                                cout << "\nWaring: " << _messages << endl;
                        }
                }

                void AllMessage(){
                        if (LogLevel >= _AllLevel){
                                cout << "\nAll: " << _messages << endl;
                        }
                }        

        public:
                void set_Level(int level){
                        LogLevel = level;
                }

                void ShowLog(const char *messages){
                        _messages = messages;
                        ErrorMessage();
                        WarningMessage();
                        AllMessage();
                }
};


int main(){
        Log log;
        log.set_Level(1);
        log.ShowLog("Error in Line 3");
}
