import math
num = 114381625757888867669235779976146612010218296721242362562561842935706935245733897830597123563958705058989075147599290026879543541

for i in xrange(3,long(math.sqrt(num))+1,2):
  if num % i == 0:
    print(num/i)
