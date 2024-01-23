The following is expected test output (mostly errors) for the initial 
release of the project before the functions specified in README01.txt are 
implemented. 

Note:
    1. some error messages will differ on different machines.
    2. some tests pass because the initial implementation trivially passes
       a test, for example when NULL is the expected return value from a 
       a function under test. 

------------------------------------------------------
Running bin/test/test_job ...
Running test suite with seed 0x0e346fd4...
/test_job/test_job_new               [ ERROR ]
Info: test/test_job.c:121: line 122: assert_valid_job call with i: 0
Error: test/test_job.c:101: assertion failed: job->pid == expected_pid (0 == 15908)
Error: child killed by signal 6 (Aborted)
/test_job/test_job_new_null          [ ERROR ]
Info: test/test_job.c:136: line 137: assert_valid_job call
Error: test/test_job.c:101: assertion failed: job->pid == expected_pid (0 == 15910)
Error: child killed by signal 6 (Aborted)
/test_job/test_job_copy_stack        [ ERROR ]
Error: test/test_job.c:152: assertion failed: cpy == &dst (0x7ffdd93bff00 == 0x7ffdd93bff30)
Error: child killed by signal 6 (Aborted)
/test_job/test_job_copy_heap         [ ERROR ]
Error: test/test_job.c:170: assertion failed: cpy != &src (0x7ffdd93bff30 != 0x7ffdd93bff30)
Error: child killed by signal 6 (Aborted)
/test_job/test_job_copy_identity     [ OK    ] [ 0.00017695 / 0.00017564 CPU ]
/test_job/test_job_copy_null         [ OK    ] [ 0.00000300 / 0.00000258 CPU ]
/test_job/test_job_init_stack        [ ERROR ]
Info: test/test_job.c:217: line 218: assert_init_job call
Error: test/test_job.c:71: assertion failed: job->label[i] == '\0' ('\xd0' == '\x00')
Error: child killed by signal 6 (Aborted)
/test_job/test_job_init_heap         [ ERROR ]
Info: test/test_job.c:239: line 240: assert_init_job call
Error: test/test_job.c:71: assertion failed: job->label[i] == '\0' ('\x68' == '\x00')
Error: child killed by signal 6 (Aborted)
/test_job/test_job_init_null         [ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_job/test_job_is_equal          [ ERROR ]
Info: test/test_job.c:275: line 276: assert_job_equalities call with i: 0
Error: test/test_job.c:93: assertion failed: job_is_equal(j1, j2) is not false
Error: child killed by signal 6 (Aborted)
/test_job/test_job_is_equal_init     [ ERROR ]
Info: test/test_job.c:296: line 297: assert_init_job call with i: 0
Error: test/test_job.c:303: assertion failed: job_is_equal(&j1, &j2) is not false
Error: child killed by signal 6 (Aborted)
/test_job/test_job_is_equal_null     [ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_job/test_job_set_stack         [ ERROR ]
Info: test/test_job.c:342: line 343: assert_valid_job call with i: 0
Error: test/test_job.c:101: assertion failed: job->pid == expected_pid (0 == 15931)
Error: child killed by signal 6 (Aborted)
/test_job/test_job_set_heap          [ ERROR ]
Info: test/test_job.c:358: line 359: assert_valid_job call with i: 0
Error: test/test_job.c:101: assertion failed: job->pid == expected_pid (1869771333 == 15933)
Error: child killed by signal 6 (Aborted)
/test_job/test_job_set_null          [ ERROR ]
Info: test/test_job.c:377: line 378: assert_valid_job call
Error: test/test_job.c:101: assertion failed: job->pid == expected_pid (0 == 15936)
Error: child killed by signal 6 (Aborted)
2 of 15 (13%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
------------------------------------------------------
Running bin/test/test_joblog ...
Running test suite with seed 0xf9ad553e...
/test_joblog/test_joblog_write_entry_cpid0[ ERROR ]
Error: test/test_joblog.c:207: assertion failed: i == 11 (0 == 11)
Error: child killed by signal 6 (Aborted)
/test_joblog/test_joblog_write_entry_cpid1[ FAIL  ]
/test_joblog/test_joblog_write_entry_cpid2[ FAIL  ]
/test_joblog/test_joblog_write_entry_cpid3[ FAIL  ]
/test_joblog/test_joblog_write_entry_errno[ OK    ] [ 0.00000435 / 0.00000388 CPU ]
/test_joblog/test_joblog_write_entry_null[ OK    ] [ 0.00000467 / 0.00000391 CPU ]
/test_joblog/test_joblog_read_entry_cpid0[ ERROR ]
Error: test/test_joblog.c:133: assertion failed: i == 11 (0 == 11)
Error: child killed by signal 6 (Aborted)
/test_joblog/test_joblog_read_entry_cpid1[ ERROR ]
Error: test/test_joblog.c:133: assertion failed: i == 11 (0 == 11)
Error: child killed by signal 6 (Aborted)
/test_joblog/test_joblog_read_entry_cpid2[ ERROR ]
Error: test/test_joblog.c:133: assertion failed: i == 11 (0 == 11)
Error: child killed by signal 6 (Aborted)
/test_joblog/test_joblog_read_entry_cpid3[ ERROR ]
Error: test/test_joblog.c:133: assertion failed: i == 11 (0 == 11)
Error: child killed by signal 6 (Aborted)
/test_joblog/test_joblog_read_entry_stack[ ERROR ]
Error: test/test_joblog.c:133: assertion failed: i == 11 (0 == 11)
Error: child killed by signal 6 (Aborted)
/test_joblog/test_joblog_read_entry_rand[ ERROR ]
Error: test/test_joblog.c:157: assertion failed: rentry != ((void *)0) ((nil) != (nil))
Error: child killed by signal 6 (Aborted)
/test_joblog/test_joblog_read_entry_bounds[ OK    ] [ 0.00408479 / 0.00029808 CPU ]
/test_joblog/test_joblog_read_entry_null[ OK    ] [ 0.00000384 / 0.00000318 CPU ]
/test_joblog/test_joblog_read_entry_errno[ ERROR ]
Error: test/test_joblog.c:133: assertion failed: i == 11 (0 == 11)
Error: child killed by signal 6 (Aborted)
/test_joblog/test_joblog_delete      [ ERROR ]
Error: test/test_joblog.c:404: assertion failed: access(log_fname[i], 0) == -1 (0 == -1)
Error: child killed by signal 6 (Aborted)
4 of 16 (25%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
------------------------------------------------------
Running bin/test/test_jobqueue ...
Running test suite with seed 0x82298697...
/test_jobqueue/test_jobqueue_new     [ ERROR ]
Error: test/test_jobqueue.c:57: assertion failed: q != ((void *)0) ((nil) != (nil))
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_capacity[ ERROR ]
Error: test/test_jobqueue_common.c:153: assertion failed: test_jq->capacity(test_jq->q) == *test_jq->buf_size - 1 (0 == 127)
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_capacity_null[ OK    ] [ 0.00000887 / 0.00000406 CPU ]
/test_jobqueue/test_jobqueue_dequeue_fullq[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_jobqueue/test_jobqueue_dequeue_inout[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_jobqueue/test_jobqueue_dequeue_emptyq[ OK    ] [ 0.00003447 / 0.00003239 CPU ]
/test_jobqueue/test_jobqueue_dequeue_heap[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_jobqueue/test_jobqueue_dequeue_null[ OK    ] [ 0.00000841 / 0.00000723 CPU ]
/test_jobqueue/test_jobqueue_enqueue_tofull[ ERROR ]
Error: test/test_jobqueue_common.c:299: assertion failed: queue_is_full(test_jq) is not true
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_enqueue_inout[ ERROR ]
Error: test/test_jobqueue_common.c:344: assertion failed: equal_jobs(dq, &expected_j) is not true
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_enqueue_fullq[ ERROR ]
Error: test/test_jobqueue_common.c:381: assertion failed: tail == *test_jq->tail (127 == 41)
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_enqueue_null[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_jobqueue/test_jobqueue_is_empty[ OK    ] [ 0.00001797 / 0.00001837 CPU ]
/test_jobqueue/test_jobqueue_is_empty_notempty[ OK    ] [ 0.00020172 / 0.00020326 CPU ]
/test_jobqueue/test_jobqueue_is_empty_null[ OK    ] [ 0.00000337 / 0.00000285 CPU ]
/test_jobqueue/test_jobqueue_is_full_empty[ OK    ] [ 0.00000468 / 0.00000387 CPU ]
/test_jobqueue/test_jobqueue_is_full_filling[ ERROR ]
Error: test/test_jobqueue_common.c:457: assertion failed: test_jq->is_full(test_jq->q) is not true
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_is_full_null[ ERROR ]
Error: test/test_jobqueue_common.c:464: assertion failed: test_jq->is_full(((void *)0)) is not true
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_peekhead_empty[ OK    ] [ 0.00000577 / 0.00000544 CPU ]
/test_jobqueue/test_jobqueue_peekhead_full[ ERROR ]
Error: test/test_jobqueue_common.c:495: assertion failed: equal_jobs(h1ptr, &expected_j) is not true
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_peekhead_heap[ ERROR ]
Error: test/test_jobqueue_common.c:557: assertion failed: ph != hj (0xbed73c != 0xbed73c)
Error: child killed by signal 6 (Aborted)
/test_jobqueue/test_jobqueue_peekhead_null[ OK    ] [ 0.00000363 / 0.00000282 CPU ]
/test_jobqueue/test_jobqueue_peektail_empty[ OK    ] [ 0.00000353 / 0.00000290 CPU ]
/test_jobqueue/test_jobqueue_peektail_full[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_jobqueue/test_jobqueue_peektail_heap[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_jobqueue/test_jobqueue_peektail_null[ OK    ] [ 0.00000490 / 0.00000387 CPU ]
/test_jobqueue/test_jobqueue_delete  [ OK    ] [ 0.00000377 / 0.00000304 CPU ]
12 of 27 (44%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
------------------------------------------------------
Running bin/test/test_proc ...
Running test suite with seed 0x3356621e...
/test_util/test_proc_new             [ OK    ] [ 0.00003049 / 0.00003023 CPU ]
/test_util/test_proc_new_null        [ OK    ] [ 0.00000674 / 0.00000603 CPU ]
2 of 2 (100%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
------------------------------------------------------
Running bin/test/test_shobject_name ...
Running test suite with seed 0x276ac009...
/test_shobject_name/test_shobject_name_short[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_empty[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_char[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_long[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_null[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_short_heap[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_empty_heap[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_char_heap[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_long_heap[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
/test_shobject_name/test_shobject_name_null_heap[ ERROR ]
Error: child killed by signal 11 (Segmentation fault)
0 of 10 (0%) tests successful, 0 (0%) test skipped.
------------------------------------------------------

