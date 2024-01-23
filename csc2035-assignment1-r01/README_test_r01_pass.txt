The following is expected test output after correct implementation of the
functions specified in README01.txt.

Running bin/test/test_job ...
Running test suite with seed 0xcf0b6b78...
/test_job/test_job_new               [ OK    ] [ 0.00016389 / 0.00016493 CPU ]
/test_job/test_job_new_null          [ OK    ] [ 0.00006919 / 0.00006899 CPU ]
/test_job/test_job_copy_stack        [ OK    ] [ 0.00014520 / 0.00014500 CPU ]
/test_job/test_job_copy_heap         [ OK    ] [ 0.00020828 / 0.00026988 CPU ]
/test_job/test_job_copy_identity     [ OK    ] [ 0.00014497 / 0.00014528 CPU ]
/test_job/test_job_copy_null         [ OK    ] [ 0.00000308 / 0.00000263 CPU ]
/test_job/test_job_init_stack        [ OK    ] [ 0.00015158 / 0.00015144 CPU ]
/test_job/test_job_init_heap         [ OK    ] [ 0.00015717 / 0.00015709 CPU ]
/test_job/test_job_init_null         [ OK    ] [ 0.00000301 / 0.00000258 CPU ]
/test_job/test_job_is_equal          [ OK    ] [ 0.00026295 / 0.00026279 CPU ]
/test_job/test_job_is_equal_init     [ OK    ] [ 0.00004932 / 0.00004949 CPU ]
/test_job/test_job_is_equal_null     [ OK    ] [ 0.00000921 / 0.00000877 CPU ]
/test_job/test_job_set_stack         [ OK    ] [ 0.00015148 / 0.00015167 CPU ]
/test_job/test_job_set_heap          [ OK    ] [ 0.00015305 / 0.00015290 CPU ]
/test_job/test_job_set_null          [ OK    ] [ 0.00004629 / 0.00004578 CPU ]
15 of 15 (100%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
------------------------------------------------------
Running bin/test/test_joblog ...
Running test suite with seed 0xaf744c96...
/test_joblog/test_joblog_write_entry_cpid0[ OK    ] [ 0.05256628 / 0.00176104 CPU ]
/test_joblog/test_joblog_write_entry_cpid1[ OK    ] [ 0.02339341 / 0.00163167 CPU ]
/test_joblog/test_joblog_write_entry_cpid2[ OK    ] [ 0.02223249 / 0.00163665 CPU ]
/test_joblog/test_joblog_write_entry_cpid3[ OK    ] [ 0.02275738 / 0.00158463 CPU ]
/test_joblog/test_joblog_write_entry_errno[ OK    ] [ 0.02189832 / 0.00176878 CPU ]
/test_joblog/test_joblog_write_entry_null[ OK    ] [ 0.00000598 / 0.00000494 CPU ]
/test_joblog/test_joblog_read_entry_cpid0[ OK    ] [ 0.00950724 / 0.00191279 CPU ]
/test_joblog/test_joblog_read_entry_cpid1[ OK    ] [ 0.02005931 / 0.00127421 CPU ]
/test_joblog/test_joblog_read_entry_cpid2[ OK    ] [ 0.00869157 / 0.00212088 CPU ]
/test_joblog/test_joblog_read_entry_cpid3[ OK    ] [ 0.00821289 / 0.00144520 CPU ]
/test_joblog/test_joblog_read_entry_stack[ OK    ] [ 0.02183058 / 0.00144170 CPU ]
/test_joblog/test_joblog_read_entry_rand[ OK    ] [ 0.01243881 / 0.00255360 CPU ]
/test_joblog/test_joblog_read_entry_bounds[ OK    ] [ 0.00640311 / 0.00058265 CPU ]
/test_joblog/test_joblog_read_entry_null[ OK    ] [ 0.00034492 / 0.00006318 CPU ]
/test_joblog/test_joblog_read_entry_errno[ OK    ] [ 0.00760264 / 0.00140752 CPU ]
/test_joblog/test_joblog_delete      [ OK    ] [ 0.03705916 / 0.00103392 CPU ]
16 of 16 (100%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
------------------------------------------------------
Running bin/test/test_jobqueue ...
Running test suite with seed 0xa08d68eb...
/test_jobqueue/test_jobqueue_new     [ OK    ] [ 0.00002745 / 0.00002676 CPU ]
/test_jobqueue/test_jobqueue_capacity[ OK    ] [ 0.00000856 / 0.00000747 CPU ]
/test_jobqueue/test_jobqueue_capacity_null[ OK    ] [ 0.00000812 / 0.00000407 CPU ]
/test_jobqueue/test_jobqueue_dequeue_fullq[ OK    ] [ 0.00003770 / 0.00003706 CPU ]
/test_jobqueue/test_jobqueue_dequeue_inout[ OK    ] [ 0.00002525 / 0.00002458 CPU ]
/test_jobqueue/test_jobqueue_dequeue_emptyq[ OK    ] [ 0.00000812 / 0.00000749 CPU ]
/test_jobqueue/test_jobqueue_dequeue_heap[ OK    ] [ 0.00006834 / 0.00006051 CPU ]
/test_jobqueue/test_jobqueue_dequeue_null[ OK    ] [ 0.00001340 / 0.00000434 CPU ]
/test_jobqueue/test_jobqueue_enqueue_tofull[ OK    ] [ 0.00003261 / 0.00003275 CPU ]
/test_jobqueue/test_jobqueue_enqueue_inout[ OK    ] [ 0.00005079 / 0.00004291 CPU ]
/test_jobqueue/test_jobqueue_enqueue_fullq[ OK    ] [ 0.00002229 / 0.00002236 CPU ]
/test_jobqueue/test_jobqueue_enqueue_null[ OK    ] [ 0.00001979 / 0.00001915 CPU ]
/test_jobqueue/test_jobqueue_is_empty[ OK    ] [ 0.00000492 / 0.00000423 CPU ]
/test_jobqueue/test_jobqueue_is_empty_notempty[ OK    ] [ 0.00003104 / 0.00003060 CPU ]
/test_jobqueue/test_jobqueue_is_empty_null[ OK    ] [ 0.00000317 / 0.00000272 CPU ]
/test_jobqueue/test_jobqueue_is_full_empty[ OK    ] [ 0.00000343 / 0.00000293 CPU ]
/test_jobqueue/test_jobqueue_is_full_filling[ OK    ] [ 0.00002163 / 0.00002125 CPU ]
/test_jobqueue/test_jobqueue_is_full_null[ OK    ] [ 0.00000316 / 0.00000275 CPU ]
/test_jobqueue/test_jobqueue_peekhead_empty[ OK    ] [ 0.00000325 / 0.00000279 CPU ]
/test_jobqueue/test_jobqueue_peekhead_full[ OK    ] [ 0.00005522 / 0.00005550 CPU ]
/test_jobqueue/test_jobqueue_peekhead_heap[ OK    ] [ 0.00003043 / 0.00003071 CPU ]
/test_jobqueue/test_jobqueue_peekhead_null[ OK    ] [ 0.00000393 / 0.00000304 CPU ]
/test_jobqueue/test_jobqueue_peektail_empty[ OK    ] [ 0.00000333 / 0.00000274 CPU ]
/test_jobqueue/test_jobqueue_peektail_full[ OK    ] [ 0.00005373 / 0.00005343 CPU ]
/test_jobqueue/test_jobqueue_peektail_heap[ OK    ] [ 0.00002762 / 0.00002703 CPU ]
/test_jobqueue/test_jobqueue_peektail_null[ OK    ] [ 0.00000328 / 0.00000278 CPU ]
/test_jobqueue/test_jobqueue_delete  [ OK    ] [ 0.00000360 / 0.00000316 CPU ]
27 of 27 (100%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
------------------------------------------------------
Running bin/test/test_proc ...
Running test suite with seed 0x153a8c66...
/test_util/test_proc_new             [ OK    ] [ 0.00004089 / 0.00004086 CPU ]
/test_util/test_proc_new_null        [ OK    ] [ 0.00000594 / 0.00000560 CPU ]
2 of 2 (100%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
------------------------------------------------------
Running bin/test/test_shobject_name ...
Running test suite with seed 0xfc4135be...
/test_shobject_name/test_shobject_name_short[ OK    ] [ 0.00002694 / 0.00002685 CPU ]
/test_shobject_name/test_shobject_name_empty[ OK    ] [ 0.00003296 / 0.00003314 CPU ]
/test_shobject_name/test_shobject_name_char[ OK    ] [ 0.00002965 / 0.00002969 CPU ]
/test_shobject_name/test_shobject_name_long[ OK    ] [ 0.00002336 / 0.00002343 CPU ]
/test_shobject_name/test_shobject_name_null[ OK    ] [ 0.00002312 / 0.00002288 CPU ]
/test_shobject_name/test_shobject_name_short_heap[ OK    ] [ 0.00005248 / 0.00004320 CPU ]
/test_shobject_name/test_shobject_name_empty_heap[ OK    ] [ 0.00002559 / 0.00002578 CPU ]
/test_shobject_name/test_shobject_name_char_heap[ OK    ] [ 0.00002612 / 0.00002579 CPU ]
/test_shobject_name/test_shobject_name_long_heap[ OK    ] [ 0.00002561 / 0.00002540 CPU ]
/test_shobject_name/test_shobject_name_null_heap[ OK    ] [ 0.00002608 / 0.00002582 CPU ]
10 of 10 (100%) tests successful, 0 (0%) test skipped.
------------------------------------------------------
