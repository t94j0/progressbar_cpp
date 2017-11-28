#include <iostream>
#include <string>

class ProgressBar {
	public:
		ProgressBar(std::ostream& output, std::string comment);
		ProgressBar(
				std::ostream& output,
				std::string comment,
				unsigned int maximum
			   );
		void increment();
	private:
		std::ostream& m_output;
		std::string m_comment;
		unsigned int m_maximum;
		unsigned int m_current;
};

ProgressBar::ProgressBar(std::ostream& output, std::string comment)
	: m_output(output),
	m_comment(comment),
	m_maximum(0),
	m_current(0) {
	};

ProgressBar::ProgressBar(std::ostream& output, std::string comment, unsigned int maximum)
	: m_output(output),
	m_comment(comment),
	m_maximum(maximum),
	m_current(0) { };

void ProgressBar::increment() {
	m_current++;
	m_output << m_comment << ": ";
	if (m_maximum == 0) {
		m_output << m_current;
	} else {
		m_output <<
			"(" << m_current << "/" << m_maximum << ")";
	}
	m_output << "\r";
}
