using Gee;
namespace DataLink {
    public class UartGenerator : Generator {
        public int parity = 0;
        public int data_bits = 8;
        public double stop_bits = 1;
        public UartGenerator(int type){
            base(type);
        }
        
        public void set_parity(int parity){
            this.parity = parity;
        }
    
        public void set_data_bits(int data_bits){
            this.data_bits = data_bits;
        }
    
        public void set_stop_bits(double stop_bits){
            this.stop_bits = stop_bits;
        }
    
        public uint16[]? add_start_sig(){
            return null;
        }
    
        public uint16[]? add_parity_sig(){
            return null;
        }
    
        public uint16[]? add_stop_sig(){
            return null;
        }

        public override void composite_protocol_data(){
        }

    }
}
