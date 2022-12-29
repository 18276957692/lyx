/* jtag.c generated by valac 0.48.1, the Vala compiler
 * generated from jtag.vala, do not modify */

#include <glib-object.h>
#include <glib.h>

#define DATA_LINK_TYPE_GENERATOR (data_link_generator_get_type ())
#define DATA_LINK_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_LINK_TYPE_GENERATOR, DataLinkGenerator))
#define DATA_LINK_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DATA_LINK_TYPE_GENERATOR, DataLinkGeneratorClass))
#define DATA_LINK_IS_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_LINK_TYPE_GENERATOR))
#define DATA_LINK_IS_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DATA_LINK_TYPE_GENERATOR))
#define DATA_LINK_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DATA_LINK_TYPE_GENERATOR, DataLinkGeneratorClass))

typedef struct _DataLinkGenerator DataLinkGenerator;
typedef struct _DataLinkGeneratorClass DataLinkGeneratorClass;
typedef struct _DataLinkGeneratorPrivate DataLinkGeneratorPrivate;

#define DATA_LINK_TYPE_JTAG_GENERATOR (data_link_jtag_generator_get_type ())
#define DATA_LINK_JTAG_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_LINK_TYPE_JTAG_GENERATOR, DataLinkJtagGenerator))
#define DATA_LINK_JTAG_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DATA_LINK_TYPE_JTAG_GENERATOR, DataLinkJtagGeneratorClass))
#define DATA_LINK_IS_JTAG_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_LINK_TYPE_JTAG_GENERATOR))
#define DATA_LINK_IS_JTAG_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DATA_LINK_TYPE_JTAG_GENERATOR))
#define DATA_LINK_JTAG_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DATA_LINK_TYPE_JTAG_GENERATOR, DataLinkJtagGeneratorClass))

typedef struct _DataLinkJtagGenerator DataLinkJtagGenerator;
typedef struct _DataLinkJtagGeneratorClass DataLinkJtagGeneratorClass;
typedef struct _DataLinkJtagGeneratorPrivate DataLinkJtagGeneratorPrivate;
enum  {
	DATA_LINK_JTAG_GENERATOR_0_PROPERTY,
	DATA_LINK_JTAG_GENERATOR_NUM_PROPERTIES
};
static GParamSpec* data_link_jtag_generator_properties[DATA_LINK_JTAG_GENERATOR_NUM_PROPERTIES];

struct _DataLinkGenerator {
	GObject parent_instance;
	DataLinkGeneratorPrivate * priv;
	gint protocol_type;
};

struct _DataLinkGeneratorClass {
	GObjectClass parent_class;
	void (*composite_protocol_data) (DataLinkGenerator* self);
	guint16* (*process_special_data) (DataLinkGenerator* self, gint* result_length1);
};

struct _DataLinkJtagGenerator {
	DataLinkGenerator parent_instance;
	DataLinkJtagGeneratorPrivate * priv;
	gint tms;
};

struct _DataLinkJtagGeneratorClass {
	DataLinkGeneratorClass parent_class;
};

static gpointer data_link_jtag_generator_parent_class = NULL;

GType data_link_generator_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DataLinkGenerator, g_object_unref)
GType data_link_jtag_generator_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DataLinkJtagGenerator, g_object_unref)
DataLinkJtagGenerator* data_link_jtag_generator_new (gint type);
DataLinkJtagGenerator* data_link_jtag_generator_construct (GType object_type,
                                                           gint type);
DataLinkGenerator* data_link_generator_construct (GType object_type,
                                                  gint protocol_type);
guint16* data_link_jtag_generator_add_clock_sig (DataLinkJtagGenerator* self,
                                                 gint* result_length1);
guint16* data_link_jtag_generator_set_tms (DataLinkJtagGenerator* self,
                                           gint* result_length1);
static void data_link_jtag_generator_real_composite_protocol_data (DataLinkGenerator* base);
static void data_link_jtag_generator_finalize (GObject * obj);
static GType data_link_jtag_generator_get_type_once (void);

DataLinkJtagGenerator*
data_link_jtag_generator_construct (GType object_type,
                                    gint type)
{
	DataLinkJtagGenerator * self = NULL;
#line 7 "../src/data_link/jtag.vala"
	self = (DataLinkJtagGenerator*) data_link_generator_construct (object_type, type);
#line 6 "../src/data_link/jtag.vala"
	return self;
#line 85 "jtag.c"
}

DataLinkJtagGenerator*
data_link_jtag_generator_new (gint type)
{
#line 6 "../src/data_link/jtag.vala"
	return data_link_jtag_generator_construct (DATA_LINK_TYPE_JTAG_GENERATOR, type);
#line 93 "jtag.c"
}

guint16*
data_link_jtag_generator_add_clock_sig (DataLinkJtagGenerator* self,
                                        gint* result_length1)
{
	guint16* _tmp0_;
	gint _tmp0__length1;
	guint16* result = NULL;
#line 10 "../src/data_link/jtag.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 11 "../src/data_link/jtag.vala"
	_tmp0_ = NULL;
#line 11 "../src/data_link/jtag.vala"
	_tmp0__length1 = 0;
#line 11 "../src/data_link/jtag.vala"
	if (result_length1) {
#line 11 "../src/data_link/jtag.vala"
		*result_length1 = _tmp0__length1;
#line 113 "jtag.c"
	}
#line 11 "../src/data_link/jtag.vala"
	result = _tmp0_;
#line 11 "../src/data_link/jtag.vala"
	return result;
#line 119 "jtag.c"
}

guint16*
data_link_jtag_generator_set_tms (DataLinkJtagGenerator* self,
                                  gint* result_length1)
{
	guint16* _tmp0_;
	gint _tmp0__length1;
	guint16* result = NULL;
#line 14 "../src/data_link/jtag.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 15 "../src/data_link/jtag.vala"
	_tmp0_ = NULL;
#line 15 "../src/data_link/jtag.vala"
	_tmp0__length1 = 0;
#line 15 "../src/data_link/jtag.vala"
	if (result_length1) {
#line 15 "../src/data_link/jtag.vala"
		*result_length1 = _tmp0__length1;
#line 139 "jtag.c"
	}
#line 15 "../src/data_link/jtag.vala"
	result = _tmp0_;
#line 15 "../src/data_link/jtag.vala"
	return result;
#line 145 "jtag.c"
}

static void
data_link_jtag_generator_real_composite_protocol_data (DataLinkGenerator* base)
{
	DataLinkJtagGenerator * self;
#line 18 "../src/data_link/jtag.vala"
	self = (DataLinkJtagGenerator*) base;
#line 154 "jtag.c"
}

static void
data_link_jtag_generator_class_init (DataLinkJtagGeneratorClass * klass,
                                     gpointer klass_data)
{
#line 3 "../src/data_link/jtag.vala"
	data_link_jtag_generator_parent_class = g_type_class_peek_parent (klass);
#line 3 "../src/data_link/jtag.vala"
	((DataLinkGeneratorClass *) klass)->composite_protocol_data = (void (*) (DataLinkGenerator*)) data_link_jtag_generator_real_composite_protocol_data;
#line 3 "../src/data_link/jtag.vala"
	G_OBJECT_CLASS (klass)->finalize = data_link_jtag_generator_finalize;
#line 167 "jtag.c"
}

static void
data_link_jtag_generator_instance_init (DataLinkJtagGenerator * self,
                                        gpointer klass)
{
}

static void
data_link_jtag_generator_finalize (GObject * obj)
{
	DataLinkJtagGenerator * self;
#line 3 "../src/data_link/jtag.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DATA_LINK_TYPE_JTAG_GENERATOR, DataLinkJtagGenerator);
#line 3 "../src/data_link/jtag.vala"
	G_OBJECT_CLASS (data_link_jtag_generator_parent_class)->finalize (obj);
#line 184 "jtag.c"
}

static GType
data_link_jtag_generator_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DataLinkJtagGeneratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) data_link_jtag_generator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DataLinkJtagGenerator), 0, (GInstanceInitFunc) data_link_jtag_generator_instance_init, NULL };
	GType data_link_jtag_generator_type_id;
	data_link_jtag_generator_type_id = g_type_register_static (DATA_LINK_TYPE_GENERATOR, "DataLinkJtagGenerator", &g_define_type_info, 0);
	return data_link_jtag_generator_type_id;
}

GType
data_link_jtag_generator_get_type (void)
{
	static volatile gsize data_link_jtag_generator_type_id__volatile = 0;
	if (g_once_init_enter (&data_link_jtag_generator_type_id__volatile)) {
		GType data_link_jtag_generator_type_id;
		data_link_jtag_generator_type_id = data_link_jtag_generator_get_type_once ();
		g_once_init_leave (&data_link_jtag_generator_type_id__volatile, data_link_jtag_generator_type_id);
	}
	return data_link_jtag_generator_type_id__volatile;
}

