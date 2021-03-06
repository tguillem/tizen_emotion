#include <tet_api.h>
#include <Ecore.h>
#include <Ecore_Evas.h>
#include <Evas.h>
#include <Emotion.h>
#include <signal.h>
#include "common.h"
#include "emotion_private.h"

static void utc_emotion_video_pos_update_p(void);
static void utc_emotion_video_pos_update_n(void);
static void utc_emotion_video_pos_update_null(void);

struct tet_testlist tet_testlist[] = {
	{ utc_emotion_video_pos_update_p, POSITIVE_TC_IDX},
	{ utc_emotion_video_pos_update_n, NEGATIVE_TC_IDX},
	{ utc_emotion_video_pos_update_null, NULL_TC_IDX},
	{ NULL, 0 },
};

static void utc_emotion_video_pos_update_p(void)
{
    Evas_Object *object = init();
    _emotion_video_pos_update(object, 5.0, 5.0);

	tet_printf("[TET_PASS]:: %s[%d] : Test has passed..", __FILE__, __LINE__);
	tet_result(TET_PASS);
}

static void utc_emotion_video_pos_update_n(void)
{
    Evas_Object *object = init();
    _emotion_video_pos_update(object, -5.0, -5.0);

	tet_printf("[TET_PASS]:: %s[%d] : Test has passed..", __FILE__, __LINE__);
	tet_result(TET_PASS);
}

static void utc_emotion_video_pos_update_null(void)
{
	signal(SIGSEGV, sigprocess);
	
    _emotion_video_pos_update(NULL, 0.0, 0.0);

	tet_printf("[TET_PASS]:: %s[%d] : Test has passed..", __FILE__, __LINE__);
	tet_result(TET_PASS);
}

