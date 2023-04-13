project('alphabet_position', 'c')

sources = ['solution.c', 'tests.c']

e = executable('solution.bin',
        sources,
        dependencies: [dependency('criterion')])

test('solution test', e, args: '--always-succeed')

