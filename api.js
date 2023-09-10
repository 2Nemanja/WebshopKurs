const {Api, JsonRpc, RpcError, JsSignatureProvider} = require("ineryjs");
const expressm= require("express");
const router = express.Router();

/** 
 *  @param {Request} request 
    @param {Response} expressm.response
*/

router.post("/user/signup", (request, response) => {
    try{
            const data = {
                username: request.body.username
            }

    }
    catch (error) {
        return response.status(500).json({
            error: {
                messsage: "Internal server failure"
            },
        });
    }
});
router.post("/watch/add", (request, response) => {
    try{
            const data = {
                username: request.body.username
            }

    }
    catch (error) {
        return response.status(500).json({
            error: {
                messsage: "Internal server failure"
            },
        });
    }
});

    module.exports = router;