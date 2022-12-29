using Gee;
namespace DataLink {
    public class NcsiGenerator : Generator {
        uint64 _destination_addr = 0xffffffffffff;
        uint64 _source_addr = 0xffffffffffff;
        uint16 _ether_type = 0x88f8;
        public int _packet_type;
    
        public NcsiGenerator(int type){
            base(type);
        }
        
        public uint64 destination_addr {
            get {
                return _destination_addr;
            }
            set {
                _destination_addr = value;
            }
        }

        public uint64 source_addr {
            get {
                return _source_addr;
            }
            set {
                _source_addr = value;
            }
        }

        public uint16 ether_type {
            get {
                return _ether_type;
            }
            private set {
                _ether_type = value;
            }
        }

        public int packet_type {
            get {
                return _packet_type;
            }
            set {
                _packet_type = value;
            }
        }
    
        public uint64[]? add_data(){
            return null;
        }

        public override void composite_protocol_data(){
        }

    }
}
