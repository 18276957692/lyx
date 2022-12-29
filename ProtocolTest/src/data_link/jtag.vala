using Gee;
namespace DataLink {
    public class JtagGenerator : Generator {
        public int tms;

        public JtagGenerator(int type){
            base(type);
        }

        public uint16[]? add_clock_sig(){
            return null;
        }

        public uint16[]? set_tms(){
            return null;
        }
    
        public override void composite_protocol_data(){
        }
    
    }
}
