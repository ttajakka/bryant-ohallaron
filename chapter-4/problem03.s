# Original sum function:

# long sum(long *start, long count)
# start in %rdi, count in %rsi

sum:
  irmovq $8,%r8
  irmovq $1,%r9
  xorq %rax,%rax
  andq %rsi,%rsi
  jmp test
loop:
  mrmovq (%rdi),%r10
  addq %r10,%rax
  addq %r8,%rdi
  subq %r9,%rsi
test:
  jne loop
  ret


# Introduce new instruction iaddq V, rB that adds an 
# immediate value V to register rB.

# Modified sum function:

# long sum(long *start, long count)
# start in %rdi, count in %rsi

sum:
  xorq %rax,%rax
  andq %rsi,%rsi
  jmp test
loop:
  mrmovq (%rdi),%r10
  addq %r10,%rax
  iaddq $8,%rdi
  iaddq $-1,%rsi
test:
  jne loop
  ret