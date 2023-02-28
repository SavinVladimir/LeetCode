# Given an input string s, reverse the order of the words.

# A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

# Return a string of the words in reverse order concatenated by a single space.

# Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string
# should only have a single space separating the words. Do not include any extra spaces.

# ACCEPTED

# TODO Улучшить время

class Solution:
    def reverseWords(self, s: str) -> str:
        word_list = s.split()
        answer = ''
        for i in range(len(word_list) - 1, -1, -1):
            answer += word_list[i] + ' '
        return answer[0:len(answer) - 1]
