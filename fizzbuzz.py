print(' '.join([(''if i%3else'fizz')+(''if i%5else'buzz')or str(i)for i in range(1,101)]))
