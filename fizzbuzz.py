print(' '.join([(''if i%3else'fizz')+(''if i%5else'buzz')+(str(i)if i%3and i%5 else'')for i in range(1,101)]))
