import numpy as np
import tensorflow as tf
A=np.random(3,3)
B=tf.random.uniform(3,3)

AAA=A@A@A
BBB=B@B@B

print(AAA)
print(BBB)