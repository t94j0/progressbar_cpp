#include <string>
#include <iostream>

class ProgressBar {
        public:
                ProgressBar(const std::string& comment);
                ProgressBar(const std::string& comment, unsigned int maximum);
                friend std::ostream& operator <<(std::ostream&, ProgressBar const&);
                void increment();
        private:
                std::string m_comment;
                unsigned int m_maximum;
                unsigned int m_current;
};
