// qstrs specific to this port
Q(citrus)
Q(hello)

// shared
Q(self)
Q(init)
Q(exit)
Q(last_result)
Q(x)
Q(y)
Q(width)
Q(height)
Q(data)
Q(bind)

// citrus.gfx
Q(gfx)
Q(init_default)
Q(set_3d)
Q(is_3d)
Q(set_screen_format)
Q(get_screen_format)
Q(set_double_buffering)
Q(flush_buffers)
Q(config_screen)
Q(swap_buffers)
Q(swap_buffers_gpu)
Q(SCREEN_TOP)
Q(SCREEN_BOTTOM)
Q(SIDE_LEFT)
Q(SIDE_RIGHT)

// citrus.gsp
Q(gsp)
Q(set_event_callback)
Q(init_event_handler)
Q(exit_event_handler)
Q(wait_for_event)
Q(wait_for_any_event)
Q(wait_for_psc0)
Q(wait_for_psc1)
Q(wait_for_vblank)
Q(wait_for_vblank0)
Q(wait_for_vblank1)
Q(wait_for_ppf)
Q(wait_for_p3d)
Q(wait_for_dma)
Q(submit_gx_command)
Q(gpu_acquire_right)
Q(gpu_release_right)
Q(gpu_import_display_capture_info)
Q(gpu_save_vram_sys_area)
Q(gpu_restore_vram_sys_area)
Q(gpu_set_lcd_force_black)
Q(gpu_set_buffer_swap)
Q(gpu_flush_data_cache)
Q(gpu_invalidate_data_cache)
Q(gpu_write_hw_regs)
Q(gpu_write_hw_regs_with_mask)
Q(gpu_read_hw_regs)
Q(gpu_register_interrupt_relay_queue)
Q(gpu_unregister_interrupt_relay_queue)
Q(gpu_trigger_cmd_req_queue)
Q(GSP_FB_FORMAT_RGBA8)
Q(GSP_FB_FORMAT_BGR8)
Q(GSP_FB_FORMAT_RGB565)
Q(GSP_FB_FORMAT_RGB5_A1)
Q(GSP_FB_FORMAT_RGBA4)
Q(GSP_EVENT_PSC0)
Q(GSP_EVENT_PSC1)
Q(GSP_EVENT_VBLANK0)
Q(GSP_EVENT_VBLANK1)
Q(GSP_EVENT_PPF)
Q(GSP_EVENT_P3D)
Q(GSP_EVENT_DMA)
Q(GSP_EVENT_MAX)

// citrus.gpu
Q(gpu)
Q(TEXUNIT_0)
Q(TEXUNIT_1)
Q(TEXUNIT_2)

// citrus.console
Q(console)
Q(get_default)
Q(debug_init)
Q(clear)
Q(FLAG_COLOR_BOLD)
Q(FLAG_COLOR_FAINT)
Q(FLAG_ITALIC)
Q(FLAG_UNDERLINE)
Q(FLAG_BLINK_SLOW)
Q(FLAG_BLINK_FAST)
Q(FLAG_COLOR_REVERSE)
Q(FLAG_CONCEAL)
Q(FLAG_CROSSED_OUT)
Q(DEBUG_NULL)
Q(DEBUG_3DMOO)
Q(DEBUG_CONSOLE)
Q(COLOR_BLACK)
Q(COLOR_RED)
Q(COLOR_GREEN)
Q(COLOR_YELLOW)
Q(COLOR_BLUE)
Q(COLOR_MAGENTA)
Q(COLOR_CYAN)
Q(COLOR_WHITE)
Q(COLOR_BRIGHT_BLACK)
Q(COLOR_BRIGHT_RED)
Q(COLOR_BRIGHT_GREEN)
Q(COLOR_BRIGHT_YELLOW)
Q(COLOR_BRIGHT_BLUE)
Q(COLOR_BRIGHT_MAGENTA)
Q(COLOR_BRIGHT_CYAN)
Q(COLOR_BRIGHT_WHITE)
Q(COLOR_FAINT_BLACK)
Q(COLOR_FAINT_RED)
Q(COLOR_FAINT_GREEN)
Q(COLOR_FAINT_YELLOW)
Q(COLOR_FAINT_BLUE)
Q(COLOR_FAINT_MAGENTA)
Q(COLOR_FAINT_CYAN)
Q(COLOR_FAINT_WHITE)

// citrus.console.PrintConsole
Q(PrintConsole)
Q(set_color)
Q(set_position)
Q(set_window)
Q(select)
Q(screen)
Q(cursor_x)
Q(cursor_y)
Q(window)
Q(window_x)
Q(window_y)
Q(window_width)
Q(window_height)
Q(flags)
Q(tab_size)
Q(fg)
Q(bg)

// citrus.apt
Q(apt)
Q(open_session)
Q(close_session)
Q(set_status)
Q(get_status)
Q(get_status_power)
Q(set_status_power)
Q(return_to_menu)
Q(wait_status_event)
Q(signal_ready_for_sleep)
Q(get_menu_app_id)
Q(main_loop)
Q(APPID_HOMEMENU)
Q(APPID_CAMERA)
Q(APPID_FRIENDS_LIST)
Q(APPID_GAME_NOTES)
Q(APPID_WEB)
Q(APPID_INSTRUCTION_MANUAL)
Q(APPID_NOTIFICATIONS)
Q(APPID_MIIVERSE)
Q(APPID_MIIVERSE_POSTING)
Q(APPID_AMIIBO_SETTINGS)
Q(APPID_APPLICATION)
Q(APPID_ESHOP)
Q(APPID_SOFTWARE_KEYBOARD)
Q(APPID_APPLETED)
Q(APPID_PNOTE_AP)
Q(APPID_SNOTE_AP)
Q(APPID_ERROR)
Q(APPID_MINT)
Q(APPID_EXTRAPAD)
Q(APPID_MEMOLIB)
Q(STATUS_NOTINITIALIZED)
Q(STATUS_RUNNING)
Q(STATUS_SUSPENDED)
Q(STATUS_EXITING)
Q(STATUS_SUSPENDING)
Q(STATUS_SLEEPMODE)
Q(STATUS_PREPARE_SLEEPMODE)
Q(STATUS_APPLETSTARTED)
Q(STATUS_APPLETCLOSED)
Q(SIGNAL_HOMEBUTTON)
Q(SIGNAL_PREPARESLEEP)
Q(SIGNAL_ENTERSLEEP)
Q(SIGNAL_WAKEUP)
Q(SIGNAL_ENABLE)
Q(SIGNAL_POWERBUTTON)
Q(SIGNAL_UTILITY)
Q(SIGNAL_SLEEPSYSTEM)
Q(SIGNAL_ERROR)
Q(HOOK_ONSUSPEND)
Q(HOOK_ONRESTORE)
Q(HOOK_ONSLEEP)
Q(HOOK_ONWAKEUP)
Q(HOOK_ONEXIT)
Q(HOOK_COUNT)

// citrus.apt.Hook
Q(Hook)
Q(callback)

// citrus.hid
Q(hid)
Q(scan_input)
Q(keys_held)
Q(keys_down)
Q(keys_up)
Q(touch_read)
Q(circle_read)
Q(accel_read)
Q(gyro_read)
Q(wait_for_event)
Q(user_get_handles)
Q(user_enable_accelerometer)
Q(user_disable_accelerometer)
Q(user_enable_gyroscope)
Q(user_disable_gyroscope)
Q(user_get_gyroscope_raw_to_dps_coefficient)
Q(user_get_sound_volume)
Q(KEY_A)
Q(KEY_B)
Q(KEY_START)
Q(KEY_SELECT)
Q(KEY_DPAD_RIGHT)
Q(KEY_DPAD_LEFT)
Q(KEY_DPAD_UP)
Q(KEY_DPAD_DOWN)
Q(KEY_R)
Q(KEY_L)
Q(KEY_X)
Q(KEY_Y)
Q(KEY_ZL)
Q(KEY_ZR)
Q(KEY_TOUCH)
Q(KEY_CSTICK_RIGHT)
Q(KEY_CSTICK_LEFT)
Q(KEY_CSTICK_UP)
Q(KEY_CSTICK_DOWN)
Q(KEY_CPAD_RIGHT)
Q(KEY_CPAD_LEFT)
Q(KEY_CPAD_UP)
Q(KEY_CPAD_DOWN)
Q(KEY_UP)
Q(KEY_DOWN)
Q(KEY_LEFT)
Q(KEY_RIGHT)
Q(EVENT_PAD0)
Q(EVENT_PAD1)
Q(EVENT_ACCEL)
Q(EVENT_GYRO)
Q(EVENT_DEBUG_PAD)
Q(EVENT_MAX)

// citrus.soc
Q(soc)
Q(buffer_size)
Q(get_host_id)

// citrus.romfs
Q(romfs)

// citrus.os
Q(os)
Q(get_firm_version)
Q(get_kernel_version)
Q(get_time)
Q(get_wifi_strength)
Q(get_3d_slider_state)
Q(set_speedup_enable)
Q(get_system_version_data)
Q(get_system_version_data_string)

// citrus.httpc
Q(httpc)
Q(sharedmem_size)
Q(METHOD_GET)
Q(METHOD_POST)
Q(METHOD_HEAD)
Q(METHOD_PUT)
Q(METHOD_DELETE)
Q(STATUS_IN_PROGRESS)
Q(STATUS_DOWNLOAD_READY)

// citrus.httpc.Request
Q(Request)
Q(url)
Q(method)
Q(use_proxy)
Q(close)
Q(add_header)
Q(add_post_string)
Q(add_post_bytes)
Q(begin_request)
Q(receive_data)
Q(get_request_state)
Q(get_download_size_state)
Q(get_response_status_code)
Q(get_response_header)
Q(download_data)
Q(request_state)
Q(response_status_code)
Q(bytes_downloaded)
Q(download_size)

// citrus.news
Q(news)
Q(add_notification)

// citrus.fs
Q(fs)
Q(MEDIATYPE_NAND)
Q(MEDIATYPE_SD)
Q(MEDIATYPE_GAME_CARD)

// citrus.ns
Q(ns)
Q(launch_title)
Q(reboot_to_title)
Q(terminate_process_tid)

// citrus.csnd
Q(csnd)
Q(set_channel_volume)
Q(set_channel_looping)
Q(set_channel_encoding)
Q(ENCODING_PCM8)
Q(ENCODING_PCM16)
Q(ENCODING_ADPCM)
Q(ENCODING_PSG)
Q(LOOP_MANUAL)
Q(LOOP_NORMAL)
Q(LOOP_ONESHOT)
Q(LOOP_NORELOAD)
Q(FLAG_LINEAR_INTERP)
Q(FLAG_REPEAT)
Q(FLAG_ONE_SHOT)
Q(FLAG_FORMAT_8BIT)
Q(FLAG_FORMAT_16BIT)
Q(FLAG_FORMAT_ADPCM)
Q(FLAG_FORMAT_PSG)
Q(FLAG_ENABLE)
Q(CAPTURE_REPEAT)
Q(CAPTURE_ONE_SHOT)
Q(CAPTURE_FORMAT_16BIT)
Q(CAPTURE_FORMAT_8BIT)
Q(CAPTURE_ENABLE)

// citrus.csnd.Sound
Q(Sound)
Q(channel)
Q(volume)
Q(pan)
Q(sample_rate)
Q(flags)
Q(play)

// citrus.csnd.Channel
Q(Channel)

// citrus.result
Q(result)
Q(succeeded)
Q(failed)
Q(level)
Q(summary)
Q(module)
Q(description)
Q(LEVEL_SUCCESS)
Q(LEVEL_INFO)
Q(LEVEL_FATAL)
Q(LEVEL_RESET)
Q(LEVEL_REINITIALIZE)
Q(LEVEL_USAGE)
Q(LEVEL_PERMANENT)
Q(LEVEL_TEMPORARY)
Q(LEVEL_STATUS)
Q(SUMMARY_SUCCESS)
Q(SUMMARY_NOP)
Q(SUMMARY_WOULDBLOCK)
Q(SUMMARY_OUTOFRESOURCE)
Q(SUMMARY_NOTFOUND)
Q(SUMMARY_INVALIDSTATE)
Q(SUMMARY_NOTSUPPORTED)
Q(SUMMARY_INVALIDARG)
Q(SUMMARY_WRONGARG)
Q(SUMMARY_CANCELED)
Q(SUMMARY_STATUSCHANGED)
Q(SUMMARY_INTERNAL)
Q(SUMMARY_INVALIDRESVAL)
Q(DESC_SUCCESS)
Q(DESC_INVALID_RESULT_VALUE)
Q(DESC_TIMEOUT)
Q(DESC_OUT_OF_RANGE)
Q(DESC_ALREADY_EXISTS)
Q(DESC_CANCEL_REQUESTED)
Q(DESC_NOT_FOUND)
Q(DESC_ALREADY_INITIALIZED)
Q(DESC_NOT_INITIALIZED)
Q(DESC_INVALID_HANDLE)
Q(DESC_INVALID_POINTER)
Q(DESC_INVALID_ADDRESS)
Q(DESC_NOT_IMPLEMENTED)
Q(DESC_OUT_OF_MEMORY)
Q(DESC_MISALIGNED_SIZE)
Q(DESC_MISALIGNED_ADDREss)
Q(DESC_BUSY)
Q(DESC_NO_DATA)
Q(DESC_INVALID_COMBINATION)
Q(DESC_INVALID_ENUM_VALUE)
Q(DESC_INVALID_SIZE)
Q(DESC_ALREADY_DONE)
Q(DESC_NOT_AUTHORIZED)
Q(DESC_TOO_LARGE)
Q(DESC_INVALID_SELECTION)

// citrus.ndsp
Q(ndsp)
Q(init)
Q(exit)
Q(get_dropped_frames)
Q(get_frame_count)
Q(set_master_volume)
Q(set_output_mode)
Q(set_clipping_mode)
Q(set_output_count)
Q(set_surround_depth)
Q(set_surround_position)
Q(set_surround_rear_ratio)
Q(enable_aux)
Q(set_aux_front_bypass)
Q(set_aux_volume)
Q(OUTPUT_MONO)
Q(OUTPUT_STEREO)
Q(OUTPUT_SURROUND)
Q(CLIP_NORMAL)
Q(CLIP_SOFT)
Q(POS_SQUARE)
Q(POS_WIDE)
Q(POS_NUM)
Q(STATUS_FREE)
Q(STATUS_QUEUED)
Q(STATUS_PLAYING)
Q(STATUS_DONE)
Q(ENCODING_PCM8)
Q(ENCODING_PCM16)
Q(ENCODING_ADPCM)
Q(FORMAT_MONO_PCM8)
Q(FORMAT_MONO_PCM16)
Q(FORMAT_MONO_ADPCM)
Q(FORMAT_STEREO_PCM8)
Q(FORMAT_STEREO_PCM16)
Q(FORMAT_PCM8)
Q(FORMAT_PCM16)
Q(FORMAT_ADPCM)
Q(INTERP_POLYPHASE)
Q(INTERP_LINEAR)
Q(INTERP_NONE)

// citrus.ndsp.Channel
Q(Channel)
Q(reset)
Q(is_playing)
Q(get_sample_position)
Q(get_wave_sequence_id)
Q(set_format)
Q(set_interpolation)
Q(set_format)
Q(set_mix)
Q(set_adpcm_coefs)
Q(clear_wave)
Q(add_wave)
Q(iir_mono_set_enable)
Q(iir_biquad_set_enable)
Q(paused)
Q(front)
Q(back)
Q(aux1_front)
Q(aux1_back)
Q(aux2_front)
Q(aux2_back)

// citrus.ndsp.Sound
Q(Sound)
Q(loop)

// citrus.env
Q(env)
Q(is_homebrew)
Q(get_app_id)
Q(get_heap_size)
Q(get_linear_heap_size)
Q(get_system_arg_list)
Q(get_system_run_flags)

// citrus.sslc
Q(sslc)

// citrus.qtm
Q(qtm)
Q(check_initialized)

// citrus.qtm.HeadTracking
Q(HeadTracking)
Q(val)
Q(is_head_fully_detected)
Q(convert_coord_to_screen)
Q(padding)
Q(coordinates)

// citrus.ptmu
Q(ptmu)
Q(is_shell_closed)
Q(get_battery_level)
Q(is_charging)
Q(is_pedometer_counting)
Q(get_step_count)

// citrus.ptmsysm
Q(ptmsysm)
Q(configure_new3ds_cpu)

// citrus.nfc
Q(nfc)
Q(start_communication)
Q(stop_communication)
Q(start_tag_scan)
Q(stop_tag_scan)
Q(load_amiibo_data)
Q(reset_tag_scan)
Q(get_tag_state)
Q(TAG_UNINITIALIZED)
Q(TAG_INITIALIZED)
Q(TAG_SCANNING)
Q(TAG_IN_RANGE)
Q(TAG_OUT_OF_RANGE)
Q(TAG_DATA_LOADED)

// citrus.ir
Q(ir)
Q(set_bit_rate)
Q(get_bit_rate)
Q(set_led_state)
Q(get_led_state)

// citrus.cfg
Q(cfg)
Q(get_region)
Q(is_canada_or_usa)
Q(get_model)
Q(is_2ds)
Q(get_language)
Q(REGION_JPN)
Q(REGION_USA)
Q(REGION_EUR)
Q(REGION_AUS)
Q(REGION_CHN)
Q(REGION_KOR)
Q(REGION_TWN)
Q(LANGUAGE_JP)
Q(LANGUAGE_EN)
Q(LANGUAGE_FR)
Q(LANGUAGE_DE)
Q(LANGUAGE_IT)
Q(LANGUAGE_ES)
Q(LANGUAGE_ZH)
Q(LANGUAGE_KO)
Q(LANGUAGE_NL)
Q(LANGUAGE_PT)
Q(LANGUAGE_RU)
Q(LANGUAGE_TW)
Q(MODEL_O3DS)
Q(MODEL_O3DSXL)
Q(MODEL_N3DS)
Q(MODEL_2DS)
Q(MODEL_N3DSXL)

// citrus.ac
Q(ac)
Q(wait_for_internet)
Q(get_wifi_status)

// sf2d
Q(sf2d)
Q(top)
Q(bottom)
Q(init_advanced)
Q(fini)
Q(set_3d)
Q(start_frame)
Q(end_frame)
Q(swapbuffers)
Q(set_vblank_wait)
Q(get_fps)
Q(set_clear_color)
Q(draw_line)
Q(draw_rectangle)
Q(draw_rectangle_rotate)
Q(draw_fill_circle)
Q(rgba8)
Q(rgba8_get_r)
Q(rgba8_get_g)
Q(rgba8_get_b)
Q(rgba8_get_a)
Q(set_scissor_test)
Q(get_current_screen)
Q(get_current_side)
Q(PLACE_RAM)
Q(PLACE_VRAM)
Q(PLACE_TEMP)
Q(TEXFMT_RGBA8)
Q(TEXFMT_RGB8)
Q(TEXFMT_RGB5A1)
Q(TEXFMT_RGB565)
Q(TEXFMT_RGBA4)
Q(TEXFMT_IA8)
Q(TEXFMT_I8)
Q(TEXFMT_A8)
Q(TEXFMT_IA4)
Q(TEXFMT_I4)
Q(TEXFMT_A4)
Q(TEXFMT_ETC1)
Q(TEXFMT_ETC1A4)

// sf2d.Texture
Q(Texture)
Q(fill_from_rgba8)
Q(place)
Q(bind_color)
Q(bind_parameters)
Q(set_params)
Q(get_params)
Q(draw)
Q(color)
Q(center)
Q(angle)
Q(scale)
Q(clip)
Q(depth)
Q(draw_quad_uv)
Q(set_pixel)
Q(get_pixel)
Q(tile32)

// sf2d.RenderTarget
Q(RenderTarget)
Q(clear_color)
Q(texture)

// sftd
Q(sftd)
Q(Font)
Q(filename)
Q(size)
Q(line_width)
Q(draw_text)
Q(get_text_width)
Q(calc_bounding_box)

// file
Q(flush)
Q(fileno)

// img
Q(img)
Q(load_png)
Q(load_jpeg)
Q(_img)
Q(_PngLoader)
Q(_JpegLoader)
Q(load_chunk)
Q(finish)
Q(load_all)
Q(load_in_background)
Q(get_image)

// socket
Q(socket)
Q(gethostid)
Q(error)
Q(family)
Q(type)
Q(proto)
Q(accept)
Q(bind)
Q(close)
Q(connect)
Q(connect_ex)
Q(fileno)
Q(getpeername)
Q(getsockname)
Q(getsockopt)
Q(ioctl)
Q(listen)
Q(recv)
Q(recvfrom)
Q(recvfrom_into)
Q(recv_into)
Q(send)
Q(sendall)
Q(sendto)
Q(setblocking)
Q(settimeout)
Q(gettimeout)
Q(setsockopt)
Q(shutdown)
Q(SOL_SOCKET)
Q(SOL_TCP)
Q(AF_INET)
Q(SOCK_STREAM)
Q(SOCK_DGRAM)
Q(IPPROTO_UDP)
Q(IPPROTO_TCP)
Q(IPPROTO_IP)
Q(MSG_OOB)
Q(MSG_PEEK)
Q(MSG_DONTWAIT)
Q(SHUT_RD)
Q(SHUT_WR)
Q(SHUT_RDWR)
Q(SO_REUSEADDR)
Q(SO_LINGER)
Q(SO_OOBINLINE)
Q(SO_SNDBUF)
Q(SO_RCVBUF)
Q(SO_SNDLOWAT)
Q(SO_RCVLOWAT)
Q(SO_TYPE)
Q(SO_ERROR)