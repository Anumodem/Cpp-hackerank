
/* Define the exception here */
struct BadLengthException : exception 
{
  string s;
  BadLengthException(int n) : s(to_string(n)) {}
  const char *what() const noexcept override 
  {
    return s.c_str();
  }
};
