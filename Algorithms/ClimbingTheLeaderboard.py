#!/bin/python3

import sys
import bisect


n = int(input().strip())
scores = [int(scores_temp) for scores_temp in input().strip().split(' ')]
m = int(input().strip())
alice = [int(alice_temp) for alice_temp in input().strip().split(' ')]
# your code goes here

scores = list(sorted(set(scores)))
#print('scores=%s' % scores, file = sys.stderr)
#print('alice=%s' % alice, file = sys.stderr)
aa = [bisect.bisect_right(scores, a) for a in alice]
#print('aa=%s' % aa, file = sys.stderr)
for a in aa:
    v = len(scores) + 1 - a
    print(v)
