#include "ProgressBar.hpp"

ProgressBar::ProgressBar(const std::string& comment)
	: m_comment(comment),
	m_maximum(0),
	m_current(0) {
	};

ProgressBar::ProgressBar(const std::string& comment, unsigned int maximum)
	: m_comment(comment),
	m_maximum(maximum),
	m_current(0) { };

std::ostream& operator <<(std::ostream& output, ProgressBar const& p) {
	output << p.m_comment << ": ";
	if (p.m_maximum == 0) {
		output << p.m_current;
	} else {
		output <<
			"(" << p.m_current << "/" << p.m_maximum << ")";
	}
	output << "\r";

	return output;
}

void ProgressBar::increment() {
	m_current++;
}
